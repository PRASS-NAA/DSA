int reverse(int x){
    long temp  = 0;
    if(x > 0)
    {
        while(x > 0)
    {
        long r = x%10;
        temp = temp*10+r;
        x = x/10;
    }
    }
    else{
        while(x < 0)
        {
        long r = x%10;
        temp = temp*10+r;
        x = x/10;
        }
    }

    if(temp >= INT_MAX || temp <= INT_MIN)
    {
        return 0;
    }
    else
    {
        return temp;
    }
}