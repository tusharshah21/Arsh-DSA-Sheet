
/* Linked list node structure
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        long long num1=0,num2=0;
        long long mod=1000000007;
        Node* temp1=first;
        Node* temp2=second;
        while(temp1){
            num1=(num1*10)%mod+(temp1->data)%mod;
            temp1=temp1->next;
        }
        while(temp2){
            num2=(num2*10)%mod+(temp2->data)%mod;
            temp2=temp2->next;
        }
        long long ans=(num1*num2)%mod;
        return ans%mod;
    }
};

