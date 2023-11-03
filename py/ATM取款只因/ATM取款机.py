
from time import sleep

card=open("D:/Coding/Python/ATM取款只因/余额.txt",'r+')
money=float(card.read())
print('请插卡')
print('------------正在读取中-----------')
sleep(1)
print('当前余额为',money,"元")
d=input('存钱or取钱：')
if d=='取钱':
    b=float(input('请输入取款金额：'))
    if b>money: 
        print('余额不足')
        sleep(0.5)
    else:
        money-=b
        card.close()
        card=open("D:/Coding/Python/ATM取款只因/余额.txt",'w+')
        card.write(str(money))
        print('请取走您的钱')
        print('当前余额为',money,'元')        
    sleep(1)
if d=='存钱':
    b=float(input('请输入存款金额'))
    money+=b
    card.close()
    card=open("D:/Coding/Python/ATM取款只因/余额.txt",'w+')
    card.write(str(money))
    print('当前余额为',money,'元')   
    sleep(1)
c=input('是否退卡：')
if c=='是':
    print('退卡中')
    sleep(2)
    print('请取走您的卡，谢谢光临')
if c=='否':
    print('前面的区域，以后再来探索吧')
card.close()
