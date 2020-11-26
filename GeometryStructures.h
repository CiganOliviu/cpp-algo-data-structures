//
// Created by cigan on 26.11.2020.
//

#ifndef CPP_ALGO_DATA_STRUCTURES_GEOMETRYSTRUCTURES_H
#define CPP_ALGO_DATA_STRUCTURES_GEOMETRYSTRUCTURES_H

namespace GeometryStructures {

    class Point {
    private:
        float Xs {};
        float Ys {};

    public:
        Point (float Xs, float Ys) {

            this->Xs = Xs;
            this->Ys = Ys;
        }

        float GetXs () {

            return this->Xs;
        }

        float GetYs () {

            return this->Ys;
        }

        ~Point() = default;
    };
}

#endif //CPP_ALGO_DATA_STRUCTURES_GEOMETRYSTRUCTURES_H
