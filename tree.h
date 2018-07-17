#ifndef tree_h
#define tree_h
template <typename T> class tree{
	public:
		tree(T k):left_node(nullptr),right_node(nullptr),key(k){};
		tree():left_node(nullptr),right_node(nullptr),key(0.0){};
		tree(tree* p,tree* l,tree* r,T k):parent_node(p),left_node(l),right_node(r){};
		tree* leftleaf(){return left_node;};
		tree* rightleaf(){return right_node;};
	  double nodeinfo(){return key;};
		void assignleft(tree* l){left_node=l;};
		void assignright(tree* r){right_node=r;};
	private:
		tree* left_node;
		tree* right_node;
		tree* parent_node;
		T key;
};
#endif
