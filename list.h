struct node_struct{
	int value;
	struct node_struct* next;
};



struct node_struct * newNode(int v);

void deleteNode(struct node_struct *n);

void print_list(struct node_struct* l);

int len_iter(struct node_struct *l);

int len_rec(struct node_struct *l, int i);

int max(struct node_struct *l);

struct node_struct* inversa(struct node_struct *l);