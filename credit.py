import cs50

def number(msg):
    ok = False
    while True:
        nc = cs50.get_string(msg)
        if not nc.isnumeric():
            print('\nINVALID')
            break
        elif len(nc) < 15 or len(nc) > 16:
            print('\nINVALID')
            break
        else:
            ok = True
        if ok:
            break
    return nc



while True:
    num = number('\nDigite o número do cartão - Number: ').strip()[0:2]
    if num == '37':
        print('AMEX')
    elif num == '51' or num == '55':
        print('MASTERCARD')
    elif num == '40' or num == '41':
        print('VISA')
    else:
        print('INVALID')
        break
    break
   