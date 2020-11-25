//
//  main.cpp
//  tic
//
//  Created by Sunil Kumar on 25/11/20.
//

#include<iostream>
using namespace std;
int main()
{
 
    int p1,p2;
    while(true)
    {
        cout << "p1 enter number" << endl;
        cin >> p1;
        switch(p1)
        {
            case 1:
        cout << "X|2|3" << endl;
        cout << "-|-|-" << endl;
        cout << "4|5|6" << endl;
        cout << "-|-|-" << endl;
        cout << "7|8|9" << endl;
        break;
        
        case 2:
        cout << "1|X|3" << endl;
        cout << "-|-|-" << endl;
        cout << "4|5|6" << endl;
        cout << "-|-|-" << endl;
        cout << "7|8|9" << endl;
        break;
        
    case 3:
cout << "1|2|X" << endl;
cout << "-|-|-" << endl;
cout << "4|5|6" << endl;
cout << "-|-|-" << endl;
cout << "7|8|9" << endl;
break;
        
    case 4:
cout << "1|2|3" << endl;
cout << "-|-|-" << endl;
cout << "X|5|6" << endl;
cout << "-|-|-" << endl;
cout << "7|8|9" << endl;
break;
        
    case 5:
cout << "1|2|3" << endl;
cout << "-|-|-" << endl;
cout << "4|X|6" << endl;
cout << "-|-|-" << endl;
cout << "7|8|9" << endl;
break;
        
    case 6:
cout << "1|2|3" << endl;
cout << "-|-|-" << endl;
cout << "4|5|X" << endl;
cout << "-|-|-" << endl;
cout << "7|8|9" << endl;
break;
        
    case 7:
cout << "1|2|3" << endl;
cout << "-|-|-" << endl;
cout << "4|5|6" << endl;
cout << "-|-|-" << endl;
cout << "X|8|9" << endl;
break;
        
    case 8:
cout << "1|2|3" << endl;
cout << "-|-|-" << endl;
cout << "4|5|6" << endl;
cout << "-|-|-" << endl;
cout << "7|X|9" << endl;
break;
        
    case 9:
cout << "1|2|3" << endl;
cout << "-|-|-" << endl;
cout << "4|5|6" << endl;
cout << "-|-|-" << endl;
cout << "7|8|X" << endl;
break;
        }
        cout << "p2 enter a number" <<endl;
        cin >> p2;
        switch(p2)
        {
            
        }
     }
    
    
    return 0;
}
