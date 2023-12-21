#include "PmergeMe.hpp"

std::vector<std::string> split(const std::string& toBeSplited, char delemiter) {
    std::vector<std::string> results;
    std::string tmp;
    std::istringstream inStream(toBeSplited);
    
    while (std::getline(inStream, tmp, delemiter))
    {
        if (!tmp.empty())
            results.push_back(tmp);
    }
    return results;
}

std::vector<std::string> parseArgv(char **v)
{
    std::string allParams = "";
    for (int i = 1; v[i] != NULL; i++)
    {
        std::string oneParam(v[i]);
        allParams += oneParam + " ";
    }
    return std::vector<std::string>(split(allParams, ' '));
}


int parseParams(std::vector<size_t> &vec,std::deque<size_t> &deq,char **v)
{
    std::vector<std::string> vecStr(parseArgv(v));
    for (size_t i=0;i<vecStr.size();i++)
    {
        std::string oneParam(vecStr[i]);
        for (size_t j=0;j<oneParam.size();j++)
        {
            if (!isdigit(oneParam[j]))
                return 1;
        }
        std::stringstream ss(oneParam);
        size_t n;
        if (!(ss >> n) || !ss.eof()) {
			std::cout << "Error: Invalid input.\n";
			return 1;
		}
        vec.push_back(n);
        deq.push_back(n);
    }
    return 0;
}