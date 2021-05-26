
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel{

    template<typename T> class BinaryTree{
        
        public:

            struct Node{
                T value;
                Node* right;
                Node* left;

            };   

        //in order iterator
        class inIterator{

            private:

                Node* head_ptr;

            public:

                inIterator(Node* p = nullptr) : head_ptr(p){}

                inIterator& operator++(){
                    return *this;
                }

                bool operator<(inIterator& iter){
                    return false;
                }

                bool operator!=(const inIterator& iter){
                    return false;
                }

                T& operator*(){
                    return head_ptr->value;
                }

                T* operator->(){
                    return &(head_ptr->value);
                }
        };

        //pre order iterator
        class preIterator{

            private:

                Node* head_ptr;

            public:

                preIterator(Node* p = nullptr) : head_ptr(p){}

                preIterator& operator++(){
                    return *this;
                }

                bool operator<(preIterator& iter){
                    return false;
                }

                bool operator!=(const preIterator& iter){
                    return false;
                }

                T& operator*(){
                    return head_ptr->value;
                }

                T* operator->(){
                    return &(head_ptr->value);
                }
        };

        //post order iterator
        class postIterator{
            private:

                Node* head_ptr;

            public:

                postIterator(Node* p = nullptr) : head_ptr(p){}

                postIterator& operator++(){
                    return *this;
                }

                bool operator<(postIterator& iter){
                    return false;
                }

                bool operator!=(const postIterator& iter){
                    return false;
                }

                T& operator*(){
                    return head_ptr->value;
                }

                T* operator->(){
                    return &(head_ptr->value);
                }
        };

        BinaryTree<T> add_root(T v){
            return *this;
        }

        BinaryTree<T> add_left(T father,T left_child){
            return *this;
        }

        BinaryTree<T> add_right(T father,T right_child){
            return *this;
        }

        preIterator begin_preorder(){
            return preIterator{root};
        }

        preIterator end_preorder(){
            return preIterator{root};
        }

        inIterator begin_inorder(){
            return inIterator{root};
        }

        inIterator end_inorder(){
            return inIterator{root};
        }

        postIterator begin_postorder(){
            return postIterator{root};
        }

        postIterator end_postorder(){
            return postIterator{root};
        }
        
        friend std::ostream& operator<<(std::ostream& output, const BinaryTree& t){
            return output;
        }

        inIterator end(){
            return inIterator{root};
        }

        inIterator begin(){
            return inIterator{root};
        }

        private:
            Node* root;
        };
}