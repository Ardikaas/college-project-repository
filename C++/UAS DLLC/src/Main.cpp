#include <iostream>

using namespace std;

struct Node{
    int nomor;
    string nama;
    string alamat;
    Node *next;
    Node *prev;
};

class DLLC{
    private:
        Node *head;
        Node *tail;
    public:
        DLLC(){
            head = NULL;
            tail = NULL;
        }
    void input(int nomor, string nama, string alamat){
        Node *newNode = new Node;
        newNode -> nomor = nomor;
        newNode -> nama = nama;
        newNode -> alamat = alamat;
        newNode -> next = NULL;
        
        if (head == NULL){
            newNode -> prev = NULL;
            head = newNode;
            tail = newNode;
        }else{
            newNode -> prev = tail;
            tail -> next = newNode;
            tail = newNode;
        }
        tail -> next = head;
        head -> prev = tail;
    }
    
    Node *getHead(){
        return head;
    }
    
    bool isEmpty(){
        return head == NULL;
    }
    
    void display(){
        if (head == NULL){
            cout << "Data kosong" << endl;
        }else{
            Node *cur = head;
            do{
                cout << cur -> nomor << " - ";
                cout << cur -> nama << " - ";
                cout << cur -> alamat << endl;
                cur = cur -> next;
            }while (cur != head);
            cout << "\n";
        }
    }
    
    void hapus(Node *del){
        if (head == NULL){
            cout << "Data kosong" << endl;
        }
        if (del == head){
            head = head -> next;
            head -> prev = head;
            tail -> prev = tail;
        }else if (del == tail){
            tail = tail -> prev;
            tail -> next = head;
            head -> prev = tail;
        }else{
            del -> prev -> next = del -> next;
            del -> next -> prev = del -> prev;
        }
        delete del;
        cout << "Data telah terhapus" << endl;
    }
};

int main(){
    DLLC bank;
    int value;
    int inNom = 0;
    string inNam;
    string inAla;
    int i = 0;
    
    while (i<1){
        cout << "1. Input data nasabah" << endl;
        cout << "2. Tampilkan data nasabah" << endl;
        cout << "3. Hapus data nasabah" << endl;
        cout << "4. Exit" << endl;
        cout << "Masukkan pilihan anda : ";
        cin >> value;
        if (value == 1){
            cout << "=================================" << endl;
            cout << "pasien ke - " << inNom << endl;
            cout << "Masukkan nama : ";
            cin >> inNam;
            cout << "Masukkan alamat : ";
            cin >> inAla;
            bank.input(inNom, inNam, inAla);
            inNom++;
            cout << "\n\n";
        }else if (value == 2){
            cout << "=================================" << endl;
            cout << "list :" << endl;
            bank.display();
            cout << "\n\n";
        }else if (value == 3){
            cout << "=================================" << endl;
            if (bank.isEmpty()){
                cout << "Data kosong" << endl;
            }else{
                string datRem;
                cout << "Masukkan nomor yang ingin dihapus : ";
                cin >> datRem;
                Node *cur = bank.getHead();
                bool nodeFound = false;
                do{
                    if (cur -> nama == datRem){
                        bank.hapus(cur);
                        nodeFound = true;
                        break;
                    }
                    cur = cur -> next;
                }while (cur != bank.getHead());
                
                if(!nodeFound){
                    cout << "Node tidak dapat ditemukan";
                }
            }
            cout << "\n\n";
        }else if(value == 4){
            i++;
        }else{
            cout << "=================================" << endl;
            cout << "input yang anda masukkan salah";
            cout << "\n\n";
        }
    }
    
    return 0;
}