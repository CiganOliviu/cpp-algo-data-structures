//
// Created by cigan on 26.11.2020.
//

#ifndef CPP_ALGO_DATA_STRUCTURES_DATACALCULATIONSTRUCTURES_H
#define CPP_ALGO_DATA_STRUCTURES_DATACALCULATIONSTRUCTURES_H

namespace DataCalculationStructures {

    template <class Type> class Limits {
    private:
        const Type InferiorLimit {};
        const Type SuperiorLimit {};

    public:
        Limits(Type InferiorLimit, Type SuperiorLimit) {

            this->InferiorLimit = InferiorLimit;
            this->SuperiorLimit = SuperiorLimit;
        }

        Type GetInferiorLimit () {

            return this->InferiorLimit;
        }

        Type GetSuperiorLimit () {

            return this->SuperiorLimit;
        }

        ~Limits () = default;
    };

    class LinearEquation {
    private:
        float Slope {};
        float Y_Intercept {};
        float Root {};

    public:
        LinearEquation (float Slope, float Y_Intercept, float Root) {

            this->Slope = Slope;
            this->Y_Intercept = Y_Intercept;
            this->Root = Root;
        };

        float GetSlope () {

            return this->Slope;
        }

        float Get_Y_Intercept () {

            return this->Y_Intercept;
        }

        float Get_Root () {

            return this->Root;
        }

        ~LinearEquation () = default;
    };

    class QuadraticEquation {
    private:
        float Coefficient_A {};
        float Coefficient_B {};
        float Coefficient_C {};
        float Root_A {};
        float Root_B {};

    public:
        QuadraticEquation (float Root_A, float Root_B) {

            this->Root_A = Root_A;
            this->Root_B = Root_B;
        }

        float GetCoefficient_A () {

            return this->Coefficient_A;
        }

        float GetCoefficient_B () {

            return this->Coefficient_B;
        }

        float GetCoefficient_C () {

            return this->Coefficient_C;
        }

        float GetRoot_A () {

            return this->Root_A;
        }

        float GetRoot_B () {

            return this->Root_B;
        }

        ~QuadraticEquation () = default;
    };

    class ComplexNumber {
    private:
        unsigned int ComplexNumberLength {};
        float RealPart {};
        float ImaginaryPart {};

    public:
        ComplexNumber(int ComplexNumberLength, float RealPart, float ImaginaryPart) {

            this->ComplexNumberLength = ComplexNumberLength;
            this->RealPart = RealPart;
            this->ImaginaryPart = ImaginaryPart;
        }

        unsigned int GetLength () {

            return this->ComplexNumberLength;
        }

        float GetRealPart () {

            return this->RealPart;
        }

        float GetImaginaryPart () {

            return this->ImaginaryPart;
        }

        ~ComplexNumber() = default;
    };
};

#endif //CPP_ALGO_DATA_STRUCTURES_DATACALCULATIONSTRUCTURES_H
