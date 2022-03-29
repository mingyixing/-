# -*- coding: utf-8 -*-
import time
import random

# 这是一个有关数字的游戏，随机数的范围在 0 到 100 之间，你要做的就是猜测随机数的大小，并且即使猜测错误会给出相应的提醒。
# 提醒范围在数字大小差距10的范围内随机给出
# 你有 5 次机会，5 次机会结束会返回最终结果，并且返回所用时间，祝你好运！！！
star_time = time.time()
a = time.time()
x = int(random.randint(0, 100))
y = -1
t = 0
# print("--------------------------")
while y != x:
    y = int(input("请输入你认为的值： "))
    t += 1
    if t == 5:
        print(x)
        break
    if y == x:
        print("恭喜，你猜对了！")
    elif y < x:
        print("猜的数字小了...")
        print("你的取值与随机数的差距在：" + str(random.randint(x - y - 5, x - y + 5)) + "左右")
    elif y > x:
        print("猜的数字大了...")
        print("你的取值与随机数的差距在：" + str(random.randint(x - y - 5, x - y + 5)) + "左右")

over_time = time.time()
print("你所花费的时间是：" + str(over_time - star_time) + "秒")
