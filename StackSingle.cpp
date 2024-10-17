#include <iostream>
#define max 7
using namespace std;
string data[max];
int top = -1;

void push(char x)
{
  if (top >= max - 1)
  {
    cout << "Stack sudah penuh\n";
  }
  else
  {
    data[++top] = x;
    cout << "'" << x << "' dimasukan ke stack\n";
  }
}

void pop()
{
  if (top < 0)
  {
    cout << "Stack belum penuh\n";
  }
  else
  {
    cout << "'" << data[top--] << "' Stack dihapus\n";
  }
}

int main()
{
  int choice;
  char value;

  do
  {
    cout << "\n1. Push\n2. Pop\n3. Exit\n";
    cout << "Input pilihan anda: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Ketik nomor atau huruf untuk di push: ";
      cin >> value;
      push(value);
      break;
    case 2:
      pop();
      break;
    case 3:
      cout << "Exiting program\n";
      break;
    default:
      cout << "Pilihan gagal.  Harap coba kembali.\n";
    }

  } while (choice != 3);

  return 0;
}