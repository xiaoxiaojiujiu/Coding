
for i in range(5):
    print('您还有'+str(5-i)+'次机会')
    password=input('请输入正确的密码：')
    if password=='我不知道密码':
        print('密码正确')
        break
    else:
        print('密码错误')
else:
    print('拜拜了您内')