test=raw_input()
tst=int(test)
for t in range(tst):
    #n=input()
    s=raw_input()
    n,s = s.split(' ')
    n=int(n)
    s=s.replace('**','$') ## * and ** splits should not interfere
    ev=s.split('*')
    ans=1
    for ele in ev:
        x, y = map(long,ele.split('$'))
        x=int(x)
        y=int(y)
        ans=(ans*pow(x,y,n))%n
    print (ans )
