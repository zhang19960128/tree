#ifndef tree_h
#define tree_h
class tree{
	public:
		tree(double k):left_node(nullptr),right_node(nullptr),key(k){};
		tree():left_node(nullptr),right_node(nullptr),key(0.0){};
		tree* leftleaf(){return left_node;};
		tree* rightleaf(){return right_node;};
	  double nodeinfo(){return key;};
		void assignleft(tree* l){left_node=l};
		void assignright(tree* r){right_node=r};
	private:
		tree* left_node;
		tree* right_node;
		double key;
};
#endif
