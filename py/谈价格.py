print('咱谈个价吧')
money= int(input('你给我多少:'))
while money < 3000:
    print('就这些？办不到，得加钱(恼)')
    print('咱再商量商量(极度敷衍)')
    money = money + int(input('再加点：'))
    print('(现在一共',money,'元)')
else:  
    print('行，咱成交!(喜)')
