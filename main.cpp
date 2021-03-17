#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num, end, count = 0;
    string size;
    cout << "Please enter a size: XS, S, M, L, XL -> ";
    cin >> size;
    while (!(size == "XS" || size == "S" || size == "M" || size == "L" || size == "XL"))
    {
        cout << "Input Invalid: " << endl;
        cout << "Try again: ";
        cin >> size;
    }
    
    if (size == "XS") 
        num = 6;
    else if (size == "S") 
        num = 10;
    else if (size == "M") 
        num = 30;
    else if (size == "L") 
        num = 50;
    else
        num = 70;
    
    int half = num/2;
    int m = num/4;
    int count2;
    cout << endl;
    
    for (int i = half/2; i <= half; i++)
    {   
        count2 = 0;
        cout << " ";
        
        for (int k = 0; k < half-i; k++)
        {
            cout << " ";
        }
      
        for (int j = i*2+1; j > 0; j--)
        {
            cout << "*";
            count2++;
        }
        
        if (m == 0)
          end = 1;
        else
            end = m*2+1;
        
        for (int j = 0; j < end; j++)
        {
            cout << " ";
        }
      
        for (int j = i*2+1; j > 0; j--)
        {
            if(count2 < num*2+1)
            {
                cout << "*";
                count2++;
            }
        }
        
        cout << endl;
        m--;
    }
    
    for (int i = num; i >= 0; i--)
    {
        if (i == num-1 && count == 0)
        {
            i = num;
            count++;
        }
        for (int k = 0; k <= num-i; k++)
        {
            cout << " ";
        }
        
        if (i == 0)
          end = 1;
        else
            end = i*2+1;
        
        for (int j = 0; j < end; j++)
        {
            cout << "*";
            
        }
        cout << endl;
    }
    
    
    return 0;
}
