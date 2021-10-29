#include "conversion.hpp"

bool isChar(char *arg) {
    if (strlen(arg) == 1 && !isdigit(*arg))
        return true;
    return false;
}

bool isInt(char *arg) {
    for (int j = 0; arg[j]; j++) {
        if (j == 0 && (arg[j] == '-' || arg[j] == '+'))
            continue ;
        else if (!isdigit(arg[j]))
            return false;
    }
    return true;
}

bool isFloat(char *arg) {
    int dot = 0, j;
    for (j = 0; arg[j] && dot < 2; j++) {
        if (j == 0 && (arg[j] == '-' || arg[j] == '+'))
            continue ;
        else if (arg[j] == '.')
            dot++;
        else if (!isdigit(arg[j]))
            break ;
    }
    if (j == (int)strlen(arg) - 2 && arg[j] == 'f' && dot == 1)
        return true;
    return false;
}

bool isDouble(char *arg) {
    int dot = 0;
    for (int j = 0; arg[j] && dot < 2; j++) {
        if (j == 0 && (arg[j] == '-' || arg[j] == '+'))
            continue ;
        else if (arg[j] == '.')
            dot++;
        else if (!isdigit(arg[j]))
            return false;
    }
    if (dot == 1)
        return true;
    return false;
}

bool isSymbs(char *arg) {
    std::string tmp(arg);
    if (tmp == "+inf" || tmp == "-inf" || tmp == "nan"
        || tmp == "+inff" || tmp == "-inff" || tmp == "nanf")
        return true;
    return false;
}
