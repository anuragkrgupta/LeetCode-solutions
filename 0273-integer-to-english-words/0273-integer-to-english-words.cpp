
class Solution {
private:
    vector<string> ones = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    vector<string> teens = {
        "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
        "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };

    vector<string> tens = {
        "", "", "Twenty", "Thirty", "Forty",
        "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
    };

    string under1000(int n) {
        if (n == 0) {
            return "";
        }

        if (n >= 100) {
            int hundreds = n / 100;
            int remainder = n % 100;

            string result = ones[hundreds] + " Hundred";

            if (remainder > 0) {
                result += " " + under1000(remainder);
            }

            return result;
        }

        if (n < 10) {
            return ones[n];
        }

        if (n < 20) {
            return teens[n - 10];
        }

        int tensDigit = n / 10;
        int onesDigit = n % 10;

        string result = tens[tensDigit];

        if (onesDigit > 0) {
            result += " " + ones[onesDigit];
        }

        return result;
    }

public:
    string numberToWords(int num) {
        if (num == 0) {
            return "Zero";
        }

        vector<string> units = {
            "", "Thousand", "Million", "Billion"
        };

        string result = "";
        int group = 0;

        while (num > 0) {
            int chunk = num % 1000;

            if (chunk > 0) {
                string part = under1000(chunk);

                if (!units[group].empty()) {
                    part += " " + units[group];
                }

                if (result.empty()) {
                    result = part;
                } else {
                    result = part + " " + result;
                }
            }

            num /= 1000;
            group++;
        }

        return result;
    }
};
