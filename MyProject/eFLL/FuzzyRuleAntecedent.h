/*
 * Robotic Research Group (RRG)
 *
 *
 * FuzzyRuleAntecedent.h
 *
 *      Author: Msc. Marvin Lemos <marvinlemos@gmail.com>
 *              AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYRULEANTECEDENT_H
#define FUZZYRULEANTECEDENT_H

//
#include <stdlib.h>
#include "FuzzySet.h"

// CONSTANTES
#define OP_AND 1
#define OP_OR 2
#define MODE_FS 1
#define MODE_FS_FS 2
#define MODE_FS_FRA 3
#define MODE_FRA_FRA 4

class FuzzyRuleAntecedent {
    public:
        // CONSTRUTORES
        FuzzyRuleAntecedent();

        bool joinSingle(FuzzySet* fuzzySet);
        bool joinWithAND(FuzzySet* fuzzySet1, FuzzySet* fuzzySet2);
        bool joinWithOR(FuzzySet* fuzzySet1, FuzzySet* fuzzySet2);
        bool joinWithAND(FuzzySet* fuzzySet, FuzzyRuleAntecedent* fuzzyRuleAntecedent);
        bool joinWithAND(FuzzyRuleAntecedent* fuzzyRuleAntecedent, FuzzySet* fuzzySet);
        bool joinWithOR(FuzzySet* fuzzySet, FuzzyRuleAntecedent* fuzzyRuleAntecedent);
        bool joinWithOR(FuzzyRuleAntecedent* fuzzyRuleAntecedent, FuzzySet* fuzzySet);
        bool joinWithAND(FuzzyRuleAntecedent* fuzzyRuleAntecedent1, FuzzyRuleAntecedent* fuzzyRuleAntecedent2);
        bool joinWithOR(FuzzyRuleAntecedent* fuzzyRuleAntecedent1, FuzzyRuleAntecedent* fuzzyRuleAntecedent2);
        float evaluate();

    private:

        int op;
        int mode;
        FuzzySet* fuzzySet1;
        FuzzySet* fuzzySet2;
        FuzzyRuleAntecedent* fuzzyRuleAntecedent1;
        FuzzyRuleAntecedent* fuzzyRuleAntecedent2;
};
#endif
