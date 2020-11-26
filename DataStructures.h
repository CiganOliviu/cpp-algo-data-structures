#ifndef CPP_ALGO_DATA_STRUCTURES_DATASTRUCTURES_H
#define CPP_ALGO_DATA_STRUCTURES_DATASTRUCTURES_H

#ifndef STANDARD_LENGTH
#define STANDARD_LENGTH 10000
#endif

#ifndef MATRIX_STANDARD_LENGTH
#define MATRIX_STANDARD_LENGTH 100
#endif

namespace DataStructures {

    template <class Type> class OneDimensionalArrayType {
    private:
        const unsigned int length {};
        Type * OneDimensionalArray = new Type[STANDARD_LENGTH];

    public:
        explicit OneDimensionalArrayType(unsigned int length) {

            this->length = length;
        }

        unsigned int GetLengthOfOneDimensionalArray() {

            return this->length;
        }

        Type * GetOneDimensionalArray() {

            return this->OneDimensionalArray;
        }

        ~OneDimensionalArrayType() = default;
    };

    template <class Type> class MatrixType {
    private:
        const unsigned int line {};
        const unsigned int column {};
        Type Matrix[MATRIX_STANDARD_LENGTH][MATRIX_STANDARD_LENGTH];

    public:
        MatrixType(unsigned int line, unsigned int column) {

            this->line = line;
            this->column = column;
        }

        unsigned int GetLineOfMatrix() {

            return this->line;
        }

        unsigned int GetColumnOfMatrix() {

            return this->column;
        }

        Type ** GetMatrix() {

            return this->Matrix;
        }

        ~MatrixType() = default;
    };

    template <class Type> class BinaryTreeType {
    private:
        const Type value {};
        BinaryTreeType<Type> * LeftLeaf;
        BinaryTreeType<Type> * RightLeaf;

    public:
        explicit BinaryTreeType() = default;

        void SetValueForBinaryTree(Type value) {

            this->value = value;
        }

        Type GetValueOfBinaryTree() {

            return this->value;
        }

        BinaryTreeType<Type> * GetLeftLeafOfArray() {

            return this->LeftLeaf;
        }

        BinaryTreeType<Type> * GetRightLeafOfArray() {

            return this->RightLeaf;
        }

        ~BinaryTreeType() = default;
    };

    template <class Type> class GraphType {
    private:
        const unsigned int Vertices {};
        const unsigned int Edges {};

    public:
        GraphType(unsigned int Vertices, unsigned int Edges) {

            this->Vertices = Vertices;
            this->Edges = Edges;
        }

        ~GraphType() = default;
    };

    template <class Type> class LinkedCore {
    private:
        const Type Data {};
        LinkedCore<Type> * NextLinkedValue;

    public:
        explicit LinkedCore(Type Data) {

            this->Data = Data;
        }

        LinkedCore<Type> * GetNextLinkedValue() {

            return this->NextLinkedValue;
        }

        virtual ~LinkedCore () = default;
    };

    template <class Type> class DoubleLinkedCore {
    private:
        const Type Data {};
        DoubleLinkedCore<Type> * NextDoubleLinkedValue {};
        DoubleLinkedCore<Type> * PreviousDoubleLinkedValue {};

    public:
        explicit DoubleLinkedCore (Type Data) {

            this->Data = Data;
        }

        DoubleLinkedCore<Type> * GetNextDoubleLinkedValue() {

            return this->NextDoubleLinkedValue;
        }

        DoubleLinkedCore<Type> * GetPreviousDoubleLinkedValue() {

            return this->PreviousDoubleLinkedValue;
        }

        virtual ~DoubleLinkedCore() = default;
    };
};

#endif //CPP_ALGO_DATA_STRUCTURES_DATASTRUCTURES_H
