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
        const unsigned int Length {};
        Type * OneDimensionalArray = new Type[STANDARD_LENGTH];

    public:
         OneDimensionalArrayType() = default;

         void SetLengthOfOneDimensionalArray(unsigned int length) {

            this->length = length;
         }

        unsigned int GetLengthOfOneDimensionalArray () {

            return this->Length;
        }

        void SetOneDimensionalArray(Type * Array) {

             this->OneDimensionalArray = Array;
         }

        Type * GetOneDimensionalArray () {

            return this->OneDimensionalArray;
        }

        ~OneDimensionalArrayType() = default;
    };

    template <class Type> class MatrixType {
    private:
        const unsigned int Line {};
        const unsigned int Column {};
        Type Matrix[MATRIX_STANDARD_LENGTH][MATRIX_STANDARD_LENGTH];

    public:
        MatrixType() = default;

        void SetLineOfMatrix(unsigned int Line) {

            this->Line = Line;
        }
        unsigned int GetLineOfMatrix () {

            return this->Line;
        }

        void SetColumnOfMatrix(unsigned int Column) {

            this->Column = Column;
        }
        unsigned int GetColumnOfMatrix () {

            return this->Column;
        }

        void SetMatrix(Type ** Matrix) {

            this->Matrix = Matrix;
        }

        Type ** GetMatrix () {

            return this->Matrix;
        }

        ~MatrixType() = default;
    };

    template <class Type> class BinaryTreeType {
    private:
        const Type Value {};
        BinaryTreeType<Type> * LeftLeaf;
        BinaryTreeType<Type> * RightLeaf;

    public:
        explicit BinaryTreeType(Type Value) {

            this->Value = Value;
        }

        Type GetValueOfBinaryTree () {

            return this->Value;
        }

        BinaryTreeType<Type> * GetLeftLeafOfArray () {

            return this->LeftLeaf;
        }

        BinaryTreeType<Type> * GetRightLeafOfArray () {

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

        unsigned int GetVertices () {

            return this->Vertices;
        }

        unsigned int GetEdges () {

            return this->Edges;
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

        Type GetData () {

            return this->Data;
        }

        LinkedCore<Type> * GetNextLinkedValue() {

            return this->NextLinkedValue;
        }

        ~LinkedCore () = default;
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

        Type GetData () {

            return this->Data;
        }

        DoubleLinkedCore<Type> * GetNextDoubleLinkedValue() {

            return this->NextDoubleLinkedValue;
        }

        DoubleLinkedCore<Type> * GetPreviousDoubleLinkedValue() {

            return this->PreviousDoubleLinkedValue;
        }

        ~DoubleLinkedCore() = default;
    };
};

#endif //CPP_ALGO_DATA_STRUCTURES_DATASTRUCTURES_H
