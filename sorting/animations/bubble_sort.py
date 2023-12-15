import pygame
from random import randint
from time import sleep

pygame.init()
width, height = 800, 600
screen = pygame.display.set_mode((width, height))

WHITE = (255, 255, 255)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
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

def update(numbers):
    screen.fill(WHITE)
    x = 10
    y = height - 10
    for number in numbers:
        rect = pygame.Rect(x, y - 10*number.value, 50, 10*number.value)
        pygame.draw.rect(screen, number.color, rect)
        x += 60
    pygame.display.flip()
    Wait(500)


numbers = generate_numbers(13, 40)
#numbers = generate_numbers([10,9,8,7,6,5,4,3,2,1])
while RUNNING:
    for i in range(len(numbers)):
        flag = True
        numbers[0].color = GREEN
        update(numbers)
        for j in range(1, len(numbers) - i):
            if(numbers[j-1].value > numbers[j].value):
                numbers[j-1], numbers[j] = numbers[j], numbers[j-1] 
                flag = False
            numbers[j-1].color = RED
            numbers[j].color = GREEN
            update(numbers)
        numbers[-i-1].color = RED 
        if flag:
            break
    Wait(5000)
    pygame.quit()
    





    

