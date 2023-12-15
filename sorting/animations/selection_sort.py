import pygame
from random import randint
from time import sleep

pygame.init()
width, height = 800, 600
screen = pygame.display.set_mode((width, height))

WHITE = (255, 255, 255)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
YELLOW = (255, 255, 0)
BLUE = (0, 0, 255)
RUNNING = True

class Number:
    def __init__(self, value):
        self.value = value
        self.color = RED

def generate_numbers(n, m):
    return [Number(randint(1, m)) for i in range(n)]

def generate_numbers_from_arr(arr):
    return [Number(i) for i in arr]

def Wait(time):
    for i in range(time//10):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
        pygame.time.wait(10)

def update(numbers, waiting_time = 500):
    screen.fill(WHITE)
    x = 10
    y = height - 10
    for number in numbers:
        rect = pygame.Rect(x, y - 10*number.value, 50, 10*number.value)
        pygame.draw.rect(screen, number.color, rect)
        x += 60
    pygame.display.flip()
    Wait(waiting_time)


numbers = generate_numbers(13, 40)
while RUNNING:
    for i in range(0, len(numbers)):
        min_idx = i
        if i:
            numbers[i-1].color = RED 
        numbers[min_idx].color = YELLOW 
        update(numbers, 250)
        for j  in range(i+1, len(numbers)):
            numbers[j].color = BLUE
            update(numbers, 250)
            if numbers[j].value < numbers[min_idx].value:
                numbers[min_idx].color = RED if min_idx != i else YELLOW
                numbers[j].color = GREEN
                min_idx = j
            else:
                numbers[j].color = RED
            update(numbers)
        numbers[i].color = RED if i != min_idx else GREEN
        numbers[i], numbers[min_idx] = numbers[min_idx], numbers[i]
        update(numbers)
    Wait(5000)
    pygame.quit()
    





    

