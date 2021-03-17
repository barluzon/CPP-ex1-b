#include <stddef.h>
#include "snowman.hpp"
#include <iostream>

using namespace std;

    namespace ariel {
        string checkArm = "\n";

        string printHat(char num) {
            switch (num) {
                case '1':
                    return " _===_ \n";

                case '2':
                    return "  ___ \n ..... \n";

                case '3':
                    return "   _  \n  /_\\ \n";

                case '4':
                    return "  ___ \n (_*_) \n";

                default:
                    string errorM = "Invalid code '" + to_string(num) + "'";
                    throw invalid_argument(errorM);
            }

        }

        string printNose(char num) {
            switch (num) {
                case '1':
                    return ",";

                case '2':
                    return ".";

                case '3':
                    return "_";

                case '4':
                    return " ";

                default:
                    string errorM = "Invalid code '" + to_string(num) + "'";
                    throw invalid_argument(errorM);
            }
        }

        string printLeftArmTop(char num) {
            switch (num) {
                case '1':
                    return "";

                case '2':
                    return "\\";

                case '3':
                    return "";

                case '4':
                    return "";

                default:
                    string errorM = "Invalid code '" + to_string(num) + "'";
                    throw invalid_argument(errorM);
            }
        }

        string printLeftArmBottom(char num) {
            switch (num) {
                case '1':
                    return "<";

                case '2':
                    return "";

                case '3':
                    return "/";

                case '4':
                    return " ";

                default:
                    string errorM = "Invalid code '" + to_string(num) + "'";
                    throw invalid_argument(errorM);
            }
        }

        string printRightArmTop(char num) {
            switch (num) {
                case '1':
                    return "";

                case '2':
                    return "/\n";

                case '3':
                    return "";

                case '4':
                    return "";

                default:
                    string errorM = "Invalid code '" + to_string(num) + "'";
                    throw invalid_argument(errorM);
            }
        }

        string printRightArmBottom(char num) {
            switch (num) {
                case '1':
                    return ">\n";

                case '2':
                    return "\n";

                case '3':
                    return "\\\n";

                case '4':
                    return " \n";

                default:
                    string errorM = "Invalid code '" + to_string(num) + "'";
                    throw invalid_argument(errorM);
            }
        }

        string printTorso(char num) {
            switch (num) {
                case '1':
                    return "( : )";

                case '2':
                    return "(] [)";

                case '3':
                    return "(> <)";

                case '4':
                    return "(   )";

                default:
                    string errorM = "Invalid code '" + to_string(num) + "'";
                    throw invalid_argument(errorM);
            }
        }

        string printBase(char num) {
            switch (num) {
                case '1':
                    return " ( : )\n";

                case '2':
                    return " (\" \")\n";

                case '3':
                    return " (___)\n";

                case '4':
                    return " (   )\n";

                default:
                    string errorM = "Invalid code '" + to_string(num) + "'";
                    throw invalid_argument(errorM);
            }
        }

        string printLeftEye(char num) {
            switch (num) {
                case '1':
                    if(checkArm.at(4)=='2'){
                        return "(.";}
                    return " (.";

                case '2':
                    if(checkArm.at(4)=='2'){
                        return "(o";}
                    return " (o";

                case '3':
                    if(checkArm.at(4)=='2'){
                        return "(O";}
                    return " (O";

                case '4':
                    if(checkArm.at(4)=='2'){
                        return "(-";}
                    return " (-";

                default:
                    string errorM = "Invalid code '" + to_string(num) + "'";
                    throw invalid_argument(errorM);
            }
        }

        string printRightEye(char num) {
            switch (num) {
                case '1':
                    if(checkArm.at(5) == '2'){
                        return ".)";}
                    return ".)\n";

                case '2':
                    if(checkArm.at(5)=='2'){
                        return "o)";}
                    return "o)\n";

                case '3':
                    if(checkArm.at(5)=='2'){
                        return "O)";}
                    return "O)\n";

                case '4':
                    if(checkArm.at(5)=='2'){
                        return "-)";}
                    return "-)\n";

                default:
                    string errorM = "Invalid code '" + to_string(num) + "'";
                    throw invalid_argument(errorM);
            }
        }
        
        string snowman(int snowmanAsInteger) {
            string ret = "\n";
            string snowmanAsString = to_string(snowmanAsInteger);
            checkArm = snowmanAsString;
            string errorM = "Invalid code '" + snowmanAsString + "'";
            int snowmanAsStringLength = snowmanAsString.size();

            if (snowmanAsStringLength != 8) {
                throw invalid_argument(errorM);
            }
                //HNLRXYTB
                //Hat - 0
                //Nose - 1
                //LeftEye - 2
                //RightEye - 3
                //X - Left Arm - 4
                //Y - right Arm - 5
                //T - torso -
                //B - Base - 7

                string add = "\n";
                add = printHat(snowmanAsString.at(0));
                ret.append(add);
                add = printLeftArmTop(snowmanAsString.at(4));
                ret.append(add);
                add = printLeftEye(snowmanAsString.at(2));
                ret.append(add);
                add = printNose(snowmanAsString.at(1));
                ret.append(add);
                add = printRightEye(snowmanAsString.at(3));
                ret.append(add);
                add = printRightArmTop(snowmanAsString.at(5));
                ret.append(add);
                add = printLeftArmBottom(snowmanAsString.at(4));
                ret.append(add);
                add = printTorso(snowmanAsString.at(6));
                ret.append(add);
                add = printRightArmBottom(snowmanAsString.at(5));
                ret.append(add);
                add = printBase(snowmanAsString.at(7));
                ret.append(add);

                return ret;
            }
        }
