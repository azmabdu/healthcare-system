#include <iostream>
using namespace std;
//DECLARATION
string new_name, new_surname, notListed, disease1;
string name, surname, passport_series, gender, id, id1, blood_group, comment, back, day_of_week, new_id;
double age, time_of_week, hour, minutes;
int total_expediture = 0, option, doctor, new_age;
int mobile_number, modify_choice, new_mobile_number, number_of_diseases, disease, c;
char choice, address[100];
bool heart_disease = false, cancer = false, accident = false, diabets = false, influenzaAndPneumonia = false, stroke = false, bronchitis = false, tuberculosis = false, tumour = false, asmtha = false, prostatitis = false, insomnia = false, ulcer = false, deafness = false, paralysis = false, not_listed = false, none = true, hiv = false;
int order = 00;
void intro()//introfunction
{
    cout << "\n\n WELCOME TO SAMO HOSPITAL";
    cout << "\n\n\n\t  HOSPITAL";
    cout << "\n\n\t MANAGEMENT";
    cout << "\n\n\t   SYSTEM";
    cout << "\n\n\n\n\tMADE BY :     SIROJIDDIN\n\t\t      AZIMJON\n\t\t      MADINA\n\t\t      OLIMJON\n";
    cout << "\n\n PRESS ENTER TO CONTINUE";
    cin.get();
    system("cls");
}
int main()
{
    system("color F2");
    intro();//calling the intro function
menu://mainmenu
    cout << "\n\n\n\tMAIN MENU";
    cout << "\n\n\t01. NEW ACCOUNT";
    cout << "\n\n\t02. MEDICAL CARD STATUS";
    cout << "\n\n\t03. DELETE A MEDICAL ACCOUNT";
    cout << "\n\n\t04. MODIFY AN ACCOUNT";
    cout << "\n\n\t05. CONTACT A DOCTOR";
    cout << "\n\n\t06. CALL FOR AMBULANCE";
    cout << "\n\n\t07. MORE ABOUT HOSPITAL";
    cout << "\n\n\t08. TOTAL EXPENDITURE";
    cout << "\n\n\t09. EXIT";
    cout << "\n\n\tSELECT YOUR OPTION (1-9): ";
    cin >> option;//choosing services
    system("cls");
    switch (option)
    {
    case 1:
        cout << "\n\n\tCREATING AN ACCOUNT..." << endl;
        cout << "\n\n\tCREATE YOUR ID     : ";
        cin >> id1;
          cout << "\n\n\tENTER YOUR FIRST NAME    : ";
        cin >> name;
        cout << "\n\n\tENTER YOUR SECOND SURNAME : ";
        cin >> surname;
    age_once_again:
        cout << "\n\n\tENTER YOUR AGE     : ";
        cin >> age;
        if (age < 0 || age>122) {
            cout << "\n\n\tINVALID RESPONSE!\n";
            cout << "\n\n\tTRY ONCE AGAIN!\n";
            cout << "\n\n\tPRESS ENTER TO CONTINUE";
            cin.get();
            goto age_once_again;
        }
    gender_once_again:
        cout << "\n\n\tENTER YOUR GENDER(Male/Female): ";
        cin >> gender;
        if (gender == "Male" || gender == "Female" || gender == "male" || gender == "female" || gender == "FEMALE" || gender == "MALE" || gender == "m" || gender == "M" || gender == "f" || gender == "F")
        {

        }
        else {
            cout << "\n\n\tINVALID RESPONSE!\n";
            cout << "\n\n\tTRY ONCE AGAIN!\n";
            cin.get();
            goto     gender_once_again;
        }
        cout << "\n\n\tENTER YOUR GROUP OF BLOOD: ";
        cin >> blood_group;
        cout << "\n\n\tENTER YOUR MOBILE NUMBER : +998";
        cin >> mobile_number;
    medical_history:
        system("cls");
        cout << "\n\n\n\tMEDICAL HISTORY";
        cout << "\n\n\t01. HEART DISEASE               07. BRONCHITIS            13. ULCER ";
        cout << "\n\n\t02. CANCER                      08. TUBERCULOSIS          14. DEAFNESS ";
        cout << "\n\n\t03. ACCIDENT                    09. TUMOUR                15. PARALYSIS ";
        cout << "\n\n\t04. DIABET                      10. ASMTHA                16. HIV/AIDS ";
        cout << "\n\n\t05. INFLUENZA AND PNEUMONIA     11. PROSTATITIS           17. NOT LISTED";
        cout << "\n\n\t06. STROKE                      12. INSOMNIA              18. NONE";



        cout << "\n\n\tENTER THE NUMBER OF DISEASES OF YOURS: ";
        cin >> number_of_diseases;

        if (number_of_diseases > 18)
        {
            cout << "\n\n\tTRY AGAIN";
            goto medical_history;
        }
        else;
        if (number_of_diseases == 17)
        {
            system("cls");
            cout << "\n\n\tENTER YOUR DISEASE: ";
            cin >> disease1;
            cout << "\n\n\tPRESS ENTER TO CONTINUE";
            cin.get();
            not_listed = true;
            goto idk;
        }
        else;
        if (number_of_diseases == 18)
        {
            system("cls");
            none = false;
            goto idk;
        }
        else;
        for (int i = 0; i < number_of_diseases; i++)
        {
        health_menu:
            cout << "\n\tSELECT YOUR DISEASE(S): ";
            cin >> disease;
            switch (disease)
            {
            case 1:
                heart_disease = true;
                break;
            case 2:
                cancer = true;
                break;
            case 3:
                accident = true;
                break;
            case 4:
                diabets = true;
                break;
            case 5:
                influenzaAndPneumonia = true;
                break;
            case 6:
                stroke = true;
                break;
            case 7:
                bronchitis = true;
                break;
            case 8:
                tuberculosis = true;
                break;
            case 9:
                tumour = true;
                break;
            case 10:
                asmtha = true;
                break;
            case 11:
                prostatitis = true;
                break;
            case 12:
                insomnia = true;
                break;
            case 13:
                ulcer = true;
                break;
            case 14:
                deafness = true;
                break;
            case 15:
                paralysis = true;
                break;
            case 16:
                hiv = true;
            case 17:

            case 18:

            default:
                cout << "\n\n\tINVALID RESPONSE!";
                cout << "\n\n\tTRY AGAIN!";
                goto health_menu;
            }
        }
        cout << "\n\nPRESS ENTER TO CONTINUE";
        cin.get();

    idk:
        system("cls");
        cout << "\n\n\tACCOUNT CREATED...\n";
        goto menu;
        break;
    case 2:
    id_once_again:
        cout << "\n\n\tENTER YOUR IDENTIFICATION NUMBER: ";
        cin >> id;
        cin.get();
        if (id == id1)
        {
            cout << "\n\n        PATIENT DATA: \n";
            cout << "\n\tFULL NAME: " << name << " ";
            cout << surname;
            cout << "\n\n\tAGE: " << age;
            cout << "\n\n\tGENDER: " << gender;
            cout << "\n\n\tBLOOD GROUP: " << blood_group;
            cout << "\n\n\tMOBILE NUMBER: +998" << mobile_number << endl;
            if (none != false)
            {
                cout << "\n\n\tMEDICAL HISTORY:";
                if (heart_disease == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". HEART DISEASE";
                }

                if (cancer == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". CANCER";
                }

                if (accident == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". ACCIDENT";
                }

                if (diabets == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". DIABET";
                }

                if (influenzaAndPneumonia == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". INFLUENZA AND PNEUMONIA";
                }

                if (stroke == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". STROKE";
                }

                if (bronchitis == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". BRONCHITIS";
                }

                if (tuberculosis == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". TUBERCULOSIS";
                }

                if (tumour == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". TUMOUR ";
                }

                if (asmtha == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". ASMTHA ";
                }

                if (prostatitis == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". PROSTATITIS  ";
                }

                if (insomnia == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". INSOMNIA  ";
                }

                if (ulcer == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". ULCER  ";
                }

                if (deafness == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". DEAFNESS ";
                }

                if (paralysis == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". PARALYSIS  ";
                }

                if (not_listed == true)
                {
                    order++;
                    cout << "\n\n\t" << order << disease1;
                }

                if (hiv == true)
                {
                    order++;
                    cout << "\n\n\t" << order << ". HIV/AIDS  ";
                }
                cout << "\n\n\tPRESS ENTER TO CONTINUE";
                cin.get();
                system("cls");
                goto menu;
            }

            else
            {
                cout << "\n\n\tPRESS ENTER TO CONTINUE";
                cin.get();
                system("cls");
                goto menu;
            }
        }
        else {
            cout << "\n\n\t PATIENT NOT FOUND";
            cout << "\n\n\t TRY ONCE AGAIN! ";
            cout << "\n\n\t PRESS ENTER TO CONTINUE";
            cin.get();
            system("cls");
            goto menu;
        }
        break;
    case 3:
    delete_account:
        cout << "\n\n\tENTER YOUR IDENTIFICATION NUMBER: ";
        cin >> id;
        cin.get();
        if (id == id1)
        {
            cout << "\n\n\tPRESS 'Y' TO DELETE YOUR ACCOUNT OR 'N' TO SAVE YOUR ACCOUNT: ";
            cin >> choice;
            if (choice == 'y' || choice == 'Y')
            {
                id1 = "empty";
                system("cls");
                cout << "\n\n\tACCOUNT DELETED...";

                goto menu;
            }
            else if (choice == 'n' || choice == 'N')
            {
                system("cls");
                cout << "\n\n\tACCOUNT SAVED...";
                goto menu;
            }
        }
        else
        {
            cout << "\n\tID NOT FOUND";
            cout << "\n\n\tTRY AGAIN";
            cout << "\n\n\tPRESS ENTER TO CONTINUE";
            cin.get();
            system("cls");
            goto menu;
        }
        cin.get();

        break;
    case 4:
    modic:
        cout << "\n\n\tENTER YOUR ID: ";
        cin >> id;
        if (id == id1)
        {
        modification:
            cout << "\n\n\tMODIFYING THE ACCOUNT...";
            cout << "\n\n\tWHAT WOULD YOU LIKE TO CHANGE: ";
            cout << "\n\n\t01. ID";
            cout << "\n\n\t02. NAME";
            cout << "\n\n\t03. SURNAME";
            cout << "\n\n\t04. MOBILE NUMBER";
            cout << "\n\n\t05. AGE";
            cout << "\n\n\t06. MAIN MENU";
            cout << "\n\n\tSELECT YOUR OPTION (1-6): ";
            cin >> modify_choice;
            system("cls");
            switch (modify_choice)
            {
            case 1:
                cout << "\n\n\tCHANGING ID...";
                cout << "\n\n\tCURRENT ID: " << id1;
                cout << "\n\n\tENTER NEW ID: ";
                cin >> new_id;
                id = id1 = new_id;
                cin.get();
                system("cls");
                cout << "\n\n\tACCOUNT UPDATED...";
                goto modification;
            case 2:
                cout << "\n\n\tCHANGING NAME...";
                cout << "\n\n\tCURRENT NAME: " << name;
                cout << "\n\n\tENTER NEW NAME: ";
                cin >> new_name;
                name = new_name;
                cin.get();
                system("cls");
                cout << "\n\n\tACCOUNT UPDATED...";
                goto modification;
                break;
            case 3:
                cout << "\n\n\tCHANGING SURNAME...";
                cout << "\n\n\tCURRENT SURNAME: " << surname;
                cout << "\n\n\tENTER NEW SURNAME: ";
                cin >> new_surname;
                surname = new_surname;
                cin.get();
                system("cls");
                cout << "\n\n\tACCOUNT UPDATED...";
                goto modification;
                break;

            case 4:
                cout << "\n\n\tCHANGING MOBILE NUMBER...";
                cout << "\n\n\tCURRENT MOBILE NUMBER: +998" << mobile_number;
                cout << "\n\n\tENTER NEW MOBILE NUMBER: +998";
                cin >> new_mobile_number;
                mobile_number = new_mobile_number;
                cin.get();
                system("cls");
                cout << "\n\n\tACCOUNT UPDATED...";
                goto modification;
                break;

            case 5:
                cout << "\n\n\tCHANGING AGE...";
                cout << "\n\n\tCURRENT AGE: " << age;
                cout << "\n\n\tENTER NEW AGE: ";
                cin >> new_age;
                age = new_age;
                cin.get();
                system("cls");
                cout << "\n\n\tACCOUNT UPDATED...";
                goto modification;
                break;

            case 6:
                system("cls");
                goto menu;


            default:
                cout << "\n\t     ID NOT FOUND";
                cout << "\n\n\t     TRY AGAIN!";
                cout << "\n\n\t     PRESS ENTER TO CONTINUE";

                cin.get();
                system("cls");
                goto menu;

            }
        }

        else
        {
            cout << "\n\n   ID NOT FOUND";
            cout << "\n\n   TRY AGAIN!";
            cin.get();
            goto modic;
        }
        break;
    case 5:
    case5menu:
        cout << "\n\n\tENTER YOUR IDENTIFICATION NUMBER: ";
        cin >> id;
        cin.get();
        if (id == id1)
        {
        case5menu1:
            int Doctortype;
            cout << "\n\n\t01. LOR";
            cout << "\n\n\t02. NEUROLOGIST";
            cout << "\n\n\t03. OPHTHALMOLOGISS";
            cout << "\n\n\t04. CARDILOGIST";
            cout << "\n\n\t05. ORTHOPEDIST";
            cout << "\n\n\t06. ENDOCRINOLOGIST";
            cout << "\n\n\t07. DENTIST";
            cout << "\n\n\t08. MAIN MENU";
            cout << "\n\n\tSELECT YOUR OPTION(1-8): ";
            cin >> Doctortype;
            if (Doctortype == 0)
            {
                system("cls");
                goto menu;
            }
            system("cls");
            switch (Doctortype)
            {
            case 1://Lor
            {int doctor;
        listlor:
            cout << endl;
            cout << "                                1. DR.KIRTI SETH                       \n ";
            cout << endl;
            cout << "                                    WORKING HOURS                               \n";
            cout << "           MONDAY-FRIDAY                                   9:00 A.M to 16:00 P.M\n";
            cout << "           SATURDAY                                        9:00 A.M to 13:00 P.M\n";
            cout << "           SUNDAY                                          OFF\n\n";
            cout << "           PRICE: 95 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n\n\n";

            cout << endl;
            cout << "                               2. DR.FARRUKH ATAMURADOV                             \n";
            cout << endl;
            cout << "                                    WORKING HOURS                             \n";
            cout << "           MONDAY-WEDNESDAY                                9:00 A.M to 16:00 P.M\n";
            cout << "           THURSDAY-SATURDAY                               13:00 P.M to 21:00 P.M\n";
            cout << "           SUNDAY                                          OFF\n\n";
            cout << "           PRICE: 125 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n\n\n";







            cout << endl;
            cout << "                               3. DR.SARVAR ABDULLAEV                       \n";
            cout << endl;
            cout << "                                    WORKING HOURS                            \n";
            cout << "           MONDAY-FRIDAY                                   9:00 A.M to 13:00 P.M\n";
            cout << "           SATURDAY                                        9:00 A.M to 13:00 P.M\n";
            cout << "           SUNDAY                                          OFF\n\n";
            cout << "           PRICE: 100 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n";
            cout << "\n\n\t   SELECT ONE OF THEM TO MAKE AN APPOINTMENT: ";
            cin >> doctor;
            if (doctor == 1)
            {
                system("cls");
            day_of_the_week_once_again:
                cout << "\n\n\tENTER DAY OF THE WEEK: ";
                cin >> day_of_week;
                if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                {

                }
                else
                {
                    cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                    cout << "\n\n\tTRY OTHER DAY\n";
                    goto day_of_the_week_once_again;
                }
            time_once_again:
                cout << "\n\tENTER HOUR: ";
                cin >> hour;
                cout << "\n\tENTER MINUTES: ";
                cin >> minutes;
                if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                }
                else
                {
                    cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                    cout << "\n\n\tTRY OTHER TIME\n";
                    goto time_once_again;
                }
                system("cls");
                cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                cout << "\n\n\tDR.KIRTI SETH";
                cout << "\n\n\tDATE: " << day_of_week;
                cout << "\n\n\tTIME: " << hour << ":" << minutes;
                cout << "\n\n\tPRICE: 95 000";
                cout << "\n\n\tCONTACT NUMBER: +998712423414\n";
                total_expediture = total_expediture + 95000;
                cout << "\n\n\tPRESS ENTER TO CONTINUE";
                cin.get();
            }

            else if (doctor == 2)
            {
                system("cls");
            day_of_the_week_once_again1:
                cout << "\n\n\tENTER DAY OF THE WEEK: ";
                cin >> day_of_week;
                if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                {

                }
                else
                {
                    cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                    cout << "\n\n\tTRY OTHER DAY\n";
                    goto day_of_the_week_once_again1;
                }
            time_once_again1:
                cout << "\n\tENTER HOUR: ";
                cin >> hour;
                cout << "\n\tENTER MINUTES: ";
                cin >> minutes;
                if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                }
                else
                {
                    cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                    cout << "\n\n\tTRY OTHER TIME\n";
                    goto time_once_again1;
                }

                system("cls");
                cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                cout << "\n\n\tDR.FARRUKH ATAMURADOV ";
                cout << "\n\n\tDATE: " << day_of_week;
                cout << "\n\n\tTIME: " << hour << ":" << minutes;
                cout << "\n\n\tPRICE: 125 000";
                cout << "\n\n\tCONTACT NUMBER: +998998395448\n";
                total_expediture = total_expediture + 125000;
                cout << "\n\n\tPRESS ENTER TO CONTINUE";
                cin.get();
            }
            else if (doctor == 3)
            {
                system("cls");
            day_of_the_week_once_again2:
                cout << "\n\n\tENTER DAY OF THE WEEK: ";
                cin >> day_of_week;
                if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                {

                }
                else
                {
                    cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                    cout << "\n\n\tTRY OTHER DAY\n";
                    goto day_of_the_week_once_again2;
                }
            time_once_again2:
                cout << "\n\tENTER HOUR: ";
                cin >> hour;
                cout << "\n\tENTER MINUTES: ";
                cin >> minutes;
                if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                }
                else
                {
                    cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                    cout << "\n\n\tTRY OTHER TIME\n";
                    goto time_once_again2;
                }

                system("cls");
                cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                cout << "\n\n\tDR.SARVAR ABDULLAEV ";
                cout << "\n\n\tDATE: " << day_of_week;
                cout << "\n\n\tTIME: " << hour << ":" << minutes;
                cout << "\n\n\tPRICE: 100 000";
                cout << "\n\n\tCONTACT NUMBER: +998934541444\n";
                total_expediture = total_expediture + 100000;
                cout << "\n\n\tPRESS ENTER TO CONTINUE";
                cin.get();
            }
            else
            {
                cout << "INVALID RESPONSE\n";
                cout << "TRY AGAIN\n";
                goto listlor;
            }

            }

            break;
            case 2://Neurolog

            listneurolog:
                cout << endl;
                cout << "                       1. DR.GULZORA MIRZAEVA                                  \n\n";
                cout << "                            WORKING HOURS                                     \n";
                cout << "           MONDAY-FRIDAY                                 14:00 P.M to 20:00 P.M\n";
                cout << "           SATURDAY                                      9:00 A.M to 13:00 P.M\n";
                cout << "           SUNDAY                                        off\n\n";
                cout << "           PRICE: 200 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n\n\n";

                cout << "                       2. DR.NAZIMA ERGASHEVA                            \n\n";
                cout << "                            WORKING HOURS                                  \n";
                cout << "           MONDAY-FRIDAY                                 9:00 A.M to 16:00 P.M\n";
                cout << "           SATURDAY                                      9:00 A.M to  13:00 P.M\n";
                cout << "           SUNDAY                                        off\n\n";
                cout << "           PRICE: 175 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n";
                cout << "\n\n           SELECT ONE OF THEM TO MAKE AN APPOINTMENT: ";
                cin >> doctor;
                system("cls");


                if (doctor == 1)
                {
                    system("cls");
                day_of_the_week_once_again3:
                    cout << "\n\n\tENTER DAY OF THE WEEK: ";
                    cin >> day_of_week;
                    if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                    {

                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER DAY\n";
                        goto day_of_the_week_once_again3;
                    }

                time_once_again3:
                    cout << "\n\tENTER HOUR: ";
                    cin >> hour;
                    cout << "\n\tENTER MINUTES: ";
                    cin >> minutes;
                    if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE\n";
                        cout << "\n\tTRY OTHER TIME";
                        goto time_once_again3;
                    }
                    system("cls");
                    cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                    cout << "\n\n\tDR.GULZORA MIRZAEVA";
                    cout << "\n\n\tDATE: " << day_of_week;
                    cout << "\n\n\tTIME: " << hour << ":" << minutes;
                    cout << "\n\n\tPRICE: 200 000";
                    cout << "\n\n\tCONTACT NUMBER: +998999353505\n";
                    total_expediture = total_expediture + 200000;
                    cout << "\n\n\tPRESS ENTER TO CONTINUE";
                    cin.get();
                }

                else if (doctor == 2)
                {
                    system("cls");
                day_of_the_week_once_again4:
                    cout << "\n\n\tENTER DAY OF THE WEEK: ";
                    cin >> day_of_week;
                    if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                    {

                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER DAY\n";
                        goto day_of_the_week_once_again4;
                    }

                time_once_again4:
                    cout << "\n\tENTER HOUR: ";
                    cin >> hour;
                    cout << "\n\tENTER MINUTES: ";
                    cin >> minutes;
                    if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER TIME\n";
                        goto time_once_again4;
                    }
                    system("cls");
                    cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                    cout << "\n\n\tDR.NAZIMA ERGASHEVA";
                    cout << "\n\n\tDATE: " << day_of_week;
                    cout << "\n\n\tTIME: " << hour << ":" << minutes;
                    cout << "\n\n\tPRICE: 175 000";
                    cout << "\n\n\tCONTACT NUMBER: +998994550515\n";
                    total_expediture = total_expediture + 175000;
                    cout << "\n\n\tPRESS ENTER TO CONTINUE";
                    cin.get();
                }

                else
                {
                    cout << "INVALID RESPONSE\n";
                    cout << "TRY AGAIN\n";
                    goto listneurolog;
                }
                break;

            case 3: //Ophthalmologist
            listophtham:
                cout << endl;
                cout << "                          1. DR.RANO NIYASKULOVA\n\n";
                cout << "                                WORKING HOURS            \n";
                cout << "           MONDAY-FRIDAY                                 9:00 A.M to 16:00 P.M\n";
                cout << "           SATURDAY                                      9:00 A.M to  14:00 P.M\n";
                cout << "           SUNDAY                                        10:00 A.M to 12:00 P.M\n\n";
                cout << "           PRICE: 275 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n\n\n";

                cout << "                          2. DR.STEFTCHO DOKOV\n\n";
                cout << "                                WORKING HOURS            \n";
                cout << "           MONDAY-FRIDAY                                 8:00 A.M to 14:00 P.M\n";
                cout << "           SATURDAY                                      9:00 A.M to  13:00 P.M\n";
                cout << "           SUNDAY                                        off\n\n";
                cout << "           PRICE: 250 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n\n\n";
                cout << "           SELECT ONE OF THEM TO MAKE AN APPOINTMENT: ";

                cin >> doctor;
                system("cls");

                if (doctor == 1)
                {
                    system("cls");
                day_of_the_week_once_again5:
                    cout << "\n\n\tENTER DAY OF THE WEEK: ";
                    cin >> day_of_week;
                    if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                    {

                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER DAY\n";
                        goto day_of_the_week_once_again5;
                    }
                time_once_again5:
                    cout << "\n\tENTER HOUR: ";
                    cin >> hour;
                    cout << "\n\tENTER MINUTES: ";
                    cin >> minutes;
                    if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER TIME\n";
                        goto time_once_again5;
                    }
                    system("cls");
                    cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                    cout << "\n\n\tDR.RANO NIYASKULOVA";
                    cout << "\n\n\tDATE: " << day_of_week;
                    cout << "\n\n\tTIME: " << hour << ":" << minutes;
                    cout << "\n\n\tPRICE: 275 000";
                    cout << "\n\n\tCONTACT NUMBER: +998999353505\n";
                    total_expediture = total_expediture + 275000;
                    cout << "\n\n\tPRESS ENTER TO CONTINUE";
                    cin.get();
                }
                else if (doctor == 2)
                {
                    system("cls");
                day_of_the_week_once_again6:
                    cout << "\n\n\tENTER DAY OF THE WEEK: ";
                    cin >> day_of_week;
                    if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                    {

                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER DAY\n";
                        goto day_of_the_week_once_again6;
                    }

                time_once_again6:
                    cout << "\n\tENTER HOUR: ";
                    cin >> hour;
                    cout << "\n\tENTER MINUTES: ";
                    cin >> minutes;
                    if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER TIME\n";
                        goto time_once_again6;
                    }
                    system("cls");
                    cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                    cout << "\n\n\tDR.STEFTCHO DOKOV";
                    cout << "\n\n\tDATE: " << day_of_week;
                    cout << "\n\n\tTIME: " << hour << ":" << minutes;
                    cout << "\n\n\tPRICE: 250 000";
                    cout << "\n\n\tCONTACT NUMBER: +998994550515\n";
                    total_expediture = total_expediture + 250000;
                    cout << "\n\n\tPRESS ENTER TO CONTINUE";
                    cin.get();
                }

                else
                {
                    cout << "INVALID RESPONSE\n\n";
                    cout << "TRY AGAIN\n";
                    goto listophtham;
                }

                break;
            case 4: //Cardiology
            listcardiolog:
                cout << "\n\n                               1. DR.ASHISH SETH\n\n ";
                cout << "                                WORKING HOURS            \n";
                cout << "           MONDAY-FRIDAY                                 9:00 A.M to 16:00 P.M\n";
                cout << "           SATURDAY                                      9:00 A.M to 13:00 P.M\n";
                cout << "           SUNDAY                                        off\n\n";
                cout << "           PRICE: 250 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n";
                cout << "\n           SELECT ONE OF THEM TO MAKE AN APPOINTMENT: ";
                cin >> doctor;
                system("cls");
                if (doctor == 1)
                {
                day_of_the_week_once_again7:
                    cout << "\n\n\tENTER DAY OF THE WEEK: ";
                    cin >> day_of_week;
                    if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                    {

                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER DAY\n";
                        goto day_of_the_week_once_again7;
                    }


                time_once_again7:
                    cout << "\n\tENTER HOUR: ";
                    cin >> hour;
                    cout << "\n\tENTER MINUTES: ";
                    cin >> minutes;
                    if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER TIME\n";
                        goto time_once_again7;
                    }
                    system("cls");
                    cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                    cout << "\n\n\tDR.ASHISH SETH ";
                    cout << "\n\n\tDATE: " << day_of_week;
                    cout << "\n\n\tTIME: " << hour << ":" << minutes;
                    cout << "\n\n\tPRICE: 500 000";
                    cout << "\n\n\tCONTACT NUMBER: +998999353505\n";
                    total_expediture = total_expediture + 500000;
                    cout << "\n\n\tPRESS ENTER TO CONTINUE";
                    cin.get();
                }

                else
                {
                    cout << "INVALID RESPONSE\n";
                    cout << "TRY AGAIN\n";
                    goto listcardiolog;

                }

                break;


            case 5://Ortopedis
            listorthopedis:
                cout << endl;
                cout << "                         1. DR.RUSTAM TASHKHODJAEV\n\n ";
                cout << "                               WORKING HOURS            \n";
                cout << "           MONDAY-FRIDAY                                 14:00 P.M to 20:00 P.M\n";
                cout << "           SATURDAY                                      9:00 A.M to  12:00 P.M\n";
                cout << "           SUNDAY                                        off\n\n";
                cout << "           PRICE: 340 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n\n\n";

                cout << "                             2. DR.LOUIS TRAIN\n\n";
                cout << "                               WORKING HOURS            \n";
                cout << "           MONDAY-FRIDAY                                 9:00 A.M to 17:00 P.M\n";
                cout << "           SATURDAY                                      9:00 A.M to  12:00 P.M\n";
                cout << "           SUNDAY                                        off\n\n";
                cout << "           PRICE: 399 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n";
                cout << "\n\n           SELECT ONE OF THEM TO MAKE AN APPOINTMENT: ";
                cin >> doctor;
                system("cls");

                if (doctor == 1)
                {
                day_of_the_week_once_again8:
                    cout << "\n\n\tENTER DAY OF THE WEEK: ";
                    cin >> day_of_week;
                    if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                    {

                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER DAY\n";
                        goto day_of_the_week_once_again8;
                    }
                time_once_again8:
                    cout << "\n\tENTER HOUR: ";
                    cin >> hour;
                    cout << "\n\tENTER MINUTES: ";
                    cin >> minutes;
                    if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER TIME\n";
                        goto time_once_again8;
                    }
                    system("cls");
                    cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                    cout << "\n\n\tDR.RUSTAM TASHKHODJAEV";
                    cout << "\n\n\tDATE: " << day_of_week;
                    cout << "\n\n\tTIME: " << hour << ":" << minutes;
                    cout << "\n\n\tPRICE: 340 000";
                    cout << "\n\n\tCONTACT NUMBER: +998999353505\n";
                    total_expediture = total_expediture + 340000;
                    cout << "\n\n\tPRESS ENTER TO CONTINUE";
                    cin.get();
                }

                else if (doctor == 2)
                {
                day_of_the_week_once_again9:
                    cout << "\n\n\tENTER DAY OF THE WEEK: ";
                    cin >> day_of_week;
                    if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                    {

                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER DAY\n";
                        goto day_of_the_week_once_again9;
                    }


                time_once_again9:
                    cout << "\n\tENTER HOUR: ";
                    cin >> hour;
                    cout << "\n\tENTER MINUTES: ";
                    cin >> minutes;
                    if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER TIME\n";
                        goto time_once_again9;
                    }
                    system("cls");
                    cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                    cout << "\n\n\tDR.LOUIS TRAIN";
                    cout << "\n\n\tDATE: " << day_of_week;
                    cout << "\n\n\tTIME: " << hour << ":" << minutes;
                    cout << "\n\n\tPRICE: 399 000";
                    cout << "\n\n\tCONTACT NUMBER: +998994550515\n";
                    total_expediture = total_expediture + 399000;
                    cout << "\n\n\tPRESS ENTER TO CONTINUE";
                    cin.get();
                }

                else
                {
                    cout << "INVALID RESPONSE\n";
                    cout << "TRY AGAIN\n";
                    goto listorthopedis;
                }

                break;

            case 6://Endocrinologist
            {
            listendocrin:
                cout << endl;
                cout << "                           1. DR.ABHIJIT TARAWADE\n\n ";
                cout << "                                WORKING HOURS            \n";
                cout << "           MONDAY-FRIDAY                                   9:00 A.M to 16:00 P.M\n";
                cout << "           SATURDAY                                        9:00 A.M to  13:00 P.M\n";
                cout << "           SUNDAY                                          off\n\n";
                cout << "           PRICE: 699 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n\n\n";

                cout << "                             2. DR.HONG JEONG\n\n";
                cout << "                                WORKING HOURS            \n";
                cout << "           MONDAY-FRIDAY                                   9:00 A.M to 17:00 P.M\n";
                cout << "           SATURDAY                                        13:00 P.M to  19:00 P.M\n";
                cout << "           SUNDAY                                          off\n\n";
                cout << "           PRICE: 450 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n\n\n";

                cout << "                             3. DR.NATALYA AN \n\n";
                cout << "                                WORKING HOURS            \n";
                cout << "           MONDAY-FRIDAY                                   8:00 A.M to 14:00 P.M\n";
                cout << "           SATURDAY                                        13:00 P.M to  19:00 P.M\n";
                cout << "           SUNDAY                                          off\n\n";
                cout << "           PRICE: 299 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n";
                cout << "\n\n           SELECT ONE OF THEM TO MAKE AN APPOINTMENT: ";
                cin >> doctor;
                system("cls");

                if (doctor == 1)
                {
                day_of_the_week_once_again10:
                    cout << "\n\n\tENTER DAY OF THE WEEK: ";
                    cin >> day_of_week;
                    if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                    {

                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER DAY\n";
                        goto day_of_the_week_once_again10;
                    }

                time_once_again10:
                    cout << "\n\tENTER HOUR: ";
                    cin >> hour;
                    cout << "\n\tENTER MINUTES: ";
                    cin >> minutes;
                    if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER TIME\n";
                        goto time_once_again10;
                    }
                    system("cls");
                    cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                    cout << "\n\n\tDR.ABHIJIT TARAWADE";
                    cout << "\n\n\tDATE: " << day_of_week;
                    cout << "\n\n\tTIME: " << hour << ":" << minutes;
                    cout << "\n\n\tPRICE: 699 000";
                    cout << "\n\n\tCONTACT NUMBER: +998712423414\n";
                    total_expediture = total_expediture + 699000;
                    cout << "\n\n\tPRESS ENTER TO CONTINUE";
                    cin.get();
                }

                else if (doctor == 2)
                {
                day_of_the_week_once_again11:
                    cout << "\n\n\tENTER DAY OF THE WEEK: ";
                    cin >> day_of_week;
                    if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                    {

                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER DAY\n";
                        goto day_of_the_week_once_again11;
                    }
                time_once_again11:
                    cout << "\n\tENTER HOUR: ";
                    cin >> hour;
                    cout << "\n\tENTER MINUTES: ";
                    cin >> minutes;
                    if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER TIME\n";
                        goto time_once_again11;
                    }
                    system("cls");
                    cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                    cout << "\n\n\tDR.HONG JEONG";
                    cout << "\n\n\tDATE: " << day_of_week;
                    cout << "\n\n\tTIME: " << hour << ":" << minutes;
                    cout << "\n\n\tPRICE: 450 000";
                    cout << "\n\n\tCONTACT NUMBER: +998998395448\n";
                    total_expediture = total_expediture + 450000;
                    cout << "\n\n\tPRESS ENTER TO CONTINUE";
                    cin.get();
                }
                else if (doctor == 3)
                {
                day_of_the_week_once_again12:
                    cout << "\n\n\tENTER DAY OF THE WEEK: ";
                    cin >> day_of_week;
                    if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                    {

                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER DAY\n";
                        goto day_of_the_week_once_again12;
                    }

                time_once_again12:
                    cout << "\n\tENTER HOUR: ";
                    cin >> hour;
                    cout << "\n\tENTER MINUTES: ";
                    cin >> minutes;
                    if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER TIME\n";
                        goto time_once_again12;
                    }
                    system("cls");
                    cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                    cout << "\n\n\tDR.NATALYA AN ";
                    cout << "\n\n\tDATE: " << day_of_week;
                    cout << "\n\n\tTIME: " << hour << ":" << minutes;
                    cout << "\n\n\tPRICE: 299 000";
                    cout << "\n\n\tCONTACT NUMBER: +998934541444\n";
                    total_expediture = total_expediture + 299000;
                    cout << "\n\n\tPRESS ENTER TO CONTINUE";
                    cin.get();
                }
                else
                {
                    cout << "INVALID RESPONSE\n";
                    cout << "TRY AGAIN\n";
                    goto listendocrin;
                }

                break;
            }

            case 7: //Dentist
            listdentist:
                cout << endl;
                cout << "                            1. DR.ALESSANDRO AGASTINI\n\n";
                cout << "                                  WORKING HOURS            \n";
                cout << "           MONDAY-FRIDAY                                  8:30 A.M to 14:00 P.M\n";
                cout << "           SATURDAY                                       9:00 A.M to 13:00 P.M\n";
                cout << "           SUNDAY                                         off\n\n";
                cout << "           PRICE: 1 000 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n\n\n";

                cout << "                                2. DR.LEE SEULKI \n\n";
                cout << "                                  WORKING HOURS            \n";
                cout << "           MONDAY-WEDNESDAY                               9:00 A.M to 17:00 P.M\n";
                cout << "           THURSDAY-SATURDAY                              13:00 P.M to  19:00 P.M\n";
                cout << "           SUNDAY                                         off\n\n";
                cout << "           PRICE: 900 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n\n\n";

                cout << "                             3. DR.ANDREI DRAGUNOV\n\n";
                cout << "                                  WORKING HOURS            \n";
                cout << "           MONDAY-WEDNESDAY                               8:00 A.M to 14:00 P.M\n";
                cout << "           THURSDAY-SATURDAY                              13:00 P.M to  20:00 P.M\n";
                cout << "           SUNDAY                                         off\n\n";
                cout << "           PRICE: 999 000 (HEALTH EXAMINATION AND DRUGS PRESCRIPTION)\n";
                cout << "\n\n           SELECT ONE OF THEM TO MAKE AN APPOINTMENT: ";
                cin >> doctor;
                system("cls");
                if (doctor == 1)
                {
                day_of_the_week_once_again13:
                    cout << "\n\n\tENTER DAY OF THE WEEK: ";
                    cin >> day_of_week;
                    if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                    {

                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER DAY\n";
                        goto day_of_the_week_once_again13;
                    }

                time_once_again13:
                    cout << "\n\tENTER HOUR: ";
                    cin >> hour;
                    cout << "\n\tENTER MINUTES: ";
                    cin >> minutes;
                    if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER TIME\n";
                        goto time_once_again13;
                    }

                    system("cls");
                    cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                    cout << "\n\n\tDR.ALESSANDRO AGASTINI";
                    cout << "\n\n\tDATE: " << day_of_week;
                    cout << "\n\n\tTIME: " << hour << ":" << minutes;
                    cout << "\n\n\tPRICE: 1 000 000";
                    cout << "\n\n\tCONTACT NUMBER: +998712423414\n";
                    total_expediture = total_expediture + 1000000;
                    cout << "\n\n\tPRESS ENTER TO CONTINUE";
                    cin.get();
                }
                else if (doctor == 2)
                {
                day_of_the_week_once_again14:
                    cout << "\n\n\tENTER DAY OF THE WEEK: ";
                    cin >> day_of_week;
                    if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                    {

                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER DAY\n";
                        goto day_of_the_week_once_again14;
                    }
                time_once_again14:
                    cout << "\n\tENTER HOUR: ";
                    cin >> hour;
                    cout << "\n\tENTER MINUTES: ";
                    cin >> minutes;
                    if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER TIME\n";
                        goto time_once_again14;
                    }
                    system("cls");
                    cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                    cout << "\n\n\tDR.LEE SEULKI";
                    cout << "\n\n\tDATE: " << day_of_week;
                    cout << "\n\n\tTIME: " << hour << ":" << minutes;
                    cout << "\n\n\tPRICE: 900 000";
                    cout << "\n\n\tCONTACT NUMBER: +998998395448\n";
                    total_expediture = total_expediture + 900000;
                    cout << "\n\n\tPRESS ENTER TO CONTINUE";
                    cin.get();
                }

                else if (doctor == 3)
                {
                day_of_the_week_once_again15:
                    cout << "\n\n\tENTER DAY OF THE WEEK: ";
                    cin >> day_of_week;
                    if (day_of_week == "MONDAY" || day_of_week == "TUESDAY" || day_of_week == "WEDNESDAY" || day_of_week == "THURSDAY" || day_of_week == "FRIDAY" || day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" || day_of_week == "friday" || day_of_week == "saturday" || day_of_week == "SATURNDAY" || day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday" || day_of_week == "Wednesday" || day_of_week == "Thursday" || day_of_week == "Saturday")
                    {

                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER DAY\n";
                        goto day_of_the_week_once_again15;
                    }
                time_once_again15:
                    cout << "\n\tENTER HOUR: ";
                    cin >> hour;
                    cout << "\n\tENTER MINUTES: ";
                    cin >> minutes;
                    if ((hour <= 16 && hour >= 9) && (minutes < 60 && minutes >= 00)) {


                    }
                    else
                    {
                        cout << "\n\tTHE DOCTOR IS UNAVAILABLE";
                        cout << "\n\n\tTRY OTHER TIME\n";
                        goto time_once_again15;
                    }
                    system("cls");
                    cout << "\n\n\tDETAILS OF THE APPOINTMENT: ";
                    cout << "\n\n\tDR.ANDREI DRAGUNOV";
                    cout << "\n\n\tDATE: " << day_of_week;
                    cout << "\n\n\tTIME: " << hour << ":" << minutes;
                    cout << "\n\n\tPRICE: 999 000";
                    cout << "\n\n\tCONTACT NUMBER: +998934541444\n";
                    total_expediture = total_expediture + 999000;
                    cout << "\n\n\tPRESS ENTER TO CONTINUE";
                    cin.get();
                }
                else
                {
                    cout << "INVALID RESPONSE\n";
                    cout << "TRY AGAIN\n";
                    goto listdentist;
                }
                break;
            case 8://main menu
                system("cls");
                goto menu;
            }

            cin.get();
            system("cls");
            goto case5menu1;


            break;
        }
        else if (id != id1)
        {
            cout << "\n\n\tID NOT FOUND";
            cout << "\n\n\tTRY AGAIN";
            cout << "\n\n\tPRESS ENTER TO CONTINUE";
            cin.get();
            system("cls");
            goto menu;
        }
        break;
    case 6:
        cout << "\n\n\tENTER YOUR ADDRESS: ";
        cin.ignore();
        cin.getline(address, 100);
        system("cls");
        cout << "\n\n\tADDRESS: " << address;
        cout << "\n\n\tAMBULANCE IS ON ITS WAY!";
        cout << "\n\n\n\tPRESS ENTER TO CONTINUE";
        cin.get();
        system("cls");
        goto menu;
        break;
    case 7:
        cin.ignore();
            cout << "\n\n\t                                             WELCOME TO SAMO HOSPITAL IN TASHKENT";
                    cout << "\n\n\t                                                 ***SCIENCE TRANSFORMING LIFE*** ";//moto
                    cout << "\n\n\tTHERE ARE FIVE BRANCHES:";
                    cout << "\n\n\t 1.MIROBOD DISTRICT";
                    cout << "\n\n\t 2.YUNUS-ABAD";
                    cout << "\n\n\t 3.SERGILI";
                    cout<<"\n\n\t 4.CHILONZOR";
                    cout << "\n\n\t 5.MIRZO-ULUGBEK";
                    cout << "\n\n\t *HOSPITAL INCLUDES:PLAYGROUND,CANTEEN,PHARMACY AND PRAY ROOM ";
                    cout << "\n\n\t *ALL DOCTORS CAME FROM OTHER COUNTRIES OF THE WORLD,HIGHLY EDUCATED AND EXPERIENCED";
                    cout << "\n\n\t *HOSPITAL COOPERATES WITH FAMOUS COMPANIES LIKE:MEDSI,XELIX,LABSORY AND DEGA ";
                    cout << "\n\n\t *BONUS:IF YOU HAVE BEEN AT THE RECEPTION OF THREE DOCTORS ,YOU CAN VISIT OUR FREE MESSAGES TREATMENT LASTS 2 WEEEKS!!!\n ";
                    cout << "\n\n\t                                                   FREE COFFEE WITH COOKIES AWAITS YOU  :)";
                    cout << "\n\t                                              SAMO HOSPITAL WILL ALWAYS BE YOUR SAFE CARE DESTINTION.";
                    cout << "\n\n\t FEEL FREE TO CONTACT WITH ADMINISTRATOR +998992000220\n";
            
            cout << "\n\n\tPRESS ENTER TO CONTINUE";
        cin.get();
        system("cls");
        goto menu;
        break;
    case 8:
    id_once_again_123:
        cout << "\n\n\tENTER YOUR IDENTIFICATION NUMBER: ";
        cin >> id;
        cin.get();
        if (id == id1)
        {
            cout << "\n\n\tTOTAL EXPENDITURE: " << total_expediture << " SUMS\n";
            
            cin.get();
            system("cls");
            goto menu;
        }
        else
        {
            cout << "\n\n\tID NOT FOUND";
            cout << "\n\n\tTRY AGAIN";
            cout << "\n\n\tPRESS ENTER TO CONTINUE";
            cin.get();
            system("cls");
            goto menu;
           
        }
        cin.get();
        system("cls");
        goto menu;
        break;
    case 9:
        cout << "\n\n\n\n\n\n\tTHANK YOU!\n\n\n\n\n\n\n";
        break;
    default:cout << "\n\n\tINVALID RESPONSE\nTRY AGAIN";
        goto menu;

        break;
    }
    return 0;
}

