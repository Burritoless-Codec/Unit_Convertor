#include <stdio.h>
#include <ctype.h>

int main() {
//define vars
    // convertor var
    char category;
    int user_choice;
    float user_input;
    float convert_result;
    //currency
    float euro = 0.93;
    float jpy = 155.78;
    float yuan = 7.23;
    float gbp = 0.79;
    float aud = 1.51;
    float franc = 0.90;
    float cad = 1.37;
    float m_peso = 16.78;
    //weight
    float gram = 453.592;
    float ounce = 16;
    float g_oz = 28.35;
    // Main menu to select convertor to use.
    printf("Welcome to the Unit Convertor.\n");
    printf("Please choose a convertor.\nTemp(t), Currency(c), Weight(m)\n");
    scanf(" %c", &category);
    // Takes user input and converts it into lower if in upper
    category = toupper(category);
    if (category == 'T'){
        printf("Please Select one.\n");
        printf("Fahrenheit to Celcius(1), Celcius to Fahrenheit(2)\n");
        scanf("%d", &user_choice);
        if(user_choice == 1){
            printf("Please enter your temperature in F: ");
            scanf("%f", &user_input);
            convert_result = ((user_input-32) * (5.0/9.0));
            printf("Temperature in C: %f", convert_result);
        }
        else if(user_choice == 2){
            printf("Please enter your temperature in C: ");
            scanf("%f", &user_input);
            convert_result = ((9.0/5.0) * user_input + 32);
            printf("Temperature in F: %f", convert_result);
        }
        else
            printf("Please enter the correct choice. \n");
    }
    else if (category == 'C') {
        printf("Please Select one.\n");
        printf("USD-XX(1), XX-USD(2)\n");
        scanf("%d", &user_choice);
        if(user_choice == 1) {
            printf("Please Select one.\n");
            printf("USD-EURO(1), USD-JPY(2), USD-CNY(3), USD-GBP(4), USD-AUD(5), USD-FR(6), USD-CAD(7), USD-MXN(8)\n");
            scanf("%d", &user_choice);
            if(user_choice == 1) {
                printf("USD-EURO\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input * euro;
                printf("Euro: %.3f",convert_result);
            }
            else if(user_choice == 2) {
                printf("USD-JPY\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input * jpy;
                printf("JPY: %.3f",convert_result);
            }
            else if(user_choice == 3) {
                printf("USD-CNY\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input * yuan;
                printf("CNY: %.3f",convert_result);
            }
            else if(user_choice == 4) {
                printf("USD-GBP\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input * gbp;
                printf("GBP: %.3f",convert_result);
            }
            else if(user_choice == 5) {
                printf("USD-AUD\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input * aud;
                printf("AUD: %.3f",convert_result);
            }
            else if(user_choice == 6) {
                printf("USD-FR\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input * franc;
                printf("FR: %.3f",convert_result);
            }
            else if(user_choice == 7) {
                printf("USD-CAD\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input * cad;
                printf("CAD: %.3f",convert_result);
            }
            else if(user_choice == 8) {
                printf("USD-MXN\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input * m_peso;
                printf("MXN: %.3f",convert_result);
            }
            else {
                printf("Invalid option please select a valid option.\n");
            }
        }
        else if(user_choice == 2) {
            printf("Please Select one.\n");
            printf("EURO-USD(1), JPY-USD(2), CNY-USD(3), GBP-USD(4), AUD-USD(5), FR-USD(6), CAD-USD(7), MXN-USD(8)\n");
            scanf("%d", &user_choice);
            if(user_choice == 1) {
                printf("EURO-USD\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input / euro;
                printf("USD: %.3f",convert_result);
            }
            else if(user_choice == 2) {
                printf("JPY-USD\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input / jpy;
                printf("USD: %.3f",convert_result);
            }
            else if(user_choice == 3) {
                printf("CNY-USD\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input / yuan;
                printf("USD: %.3f",convert_result);
            }
            else if(user_choice == 4) {
                printf("GBP-USD\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input / gbp;
                printf("USD: %.3f",convert_result);
            }
            else if(user_choice == 5) {
                printf("AUD-USD\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input / aud;
                printf("USD: %.3f",convert_result);
            }
            else if(user_choice == 6) {
                printf("FR-USD\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input / franc;
                printf("USD: %.3f",convert_result);
            }
            else if(user_choice == 7) {
                printf("CAD-USD\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input / cad;
                printf("USD: %.3f",convert_result);
            }
            else if(user_choice == 8) {
                printf("MXN-USD\n");
                printf("Input amount: ");
                scanf(" %f", &user_input);
                convert_result = user_input / m_peso;
                printf("USD: %.3f",convert_result);
            }
            else {
                printf("Invalid option please select a valid option.\n");
            }
        }
    }
    else if (category == 'M') {
        printf("Please Select one.\n");
        printf("G-LBS(1), OZ-LBS(2), KG-LBS(3), OZ-G(4), LBS=G(5)\n");
        scanf("%d", &user_choice);
        if(user_choice == 1){
            printf("How many grams: \n");
            scanf("%f",&user_input);
            convert_result = user_input / gram;
            printf("Pounds: %.5f",convert_result);
        }
        else if(user_choice == 2) {
            printf("How many ounces: \n");
            scanf("%f",&user_input);
            convert_result = user_input / ounce;
            printf("Pounds: %.5f",convert_result);
        }
        else if(user_choice == 3) {
            printf("How many kilograms: \n");
            scanf("%f",&user_input);
            convert_result = (user_input * 1000) / gram;
            printf("Pounds: %.5f",convert_result);
        }
        else if(user_choice == 4) {
            printf("How many ounces: \n");
            scanf("%f",&user_input);
            convert_result = user_input * g_oz;
            printf("Grams: %.5f",convert_result);
        }
        else if(user_choice == 5) {
            printf("How many pounds: \n");
            scanf("%f",&user_input);
            convert_result = user_input * gram;
            printf("Grams: %.5f",convert_result);
        }
    }
    return 0;
}