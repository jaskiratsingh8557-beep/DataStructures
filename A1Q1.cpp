#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice, pos, val, i, key, found;
    do {
        cout << "\n---MENU---\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\nEnter choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter size: ";
                cin >> n;
                cout << "Enter elements: ";
                for(i=0;i<n;i++) cin >> arr[i];
                break;
            case 2:
                cout << "Array: ";
                for(i=0;i<n;i++) cout << arr[i] << " ";
                cout << endl;
                break;
            case 3:
                cout << "Enter position and value: ";
                cin >> pos >> val;
                for(i=n;i>=pos;i--) arr[i]=arr[i-1];
                arr[pos-1]=val;
                n++;
                break;
            case 4:
                cout << "Enter position: ";
                cin >> pos;
                for(i=pos-1;i<n-1;i++) arr[i]=arr[i+1];
                n--;
                break;
            case 5:
                cout << "Enter value to search: ";
                cin >> key;
                found=0;
                for(i=0;i<n;i++) {
                    if(arr[i]==key) {
                        cout << "Found at position " << i+1 << endl;
                        found=1;
                        break;
                    }
                }
                if(!found) cout << "Not Found\n";
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid Choice\n";
        }
    } while(choice!=6);
    return 0;
}
