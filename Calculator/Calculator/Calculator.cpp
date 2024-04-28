// Include necessary header files
#include "pch.h"
#include <string>

// Import namespaces
using namespace System;
using namespace System::Windows::Forms;

// Calculator class
ref class CalculatorForm : public Form
{
private:
    // Declare private variables
    double num1, num2, result;
    String^ currentInput;
    char operation;

    // Declare controls
    TextBox^ textBox;

public:
    // Constructor
    CalculatorForm()
    {
        // Initialize variables
        num1 = 0;
        num2 = 0;
        result = 0;
        currentInput = "";
        operation = ' ';

        // Initialize form
        this->Text = "Simple Calculator";
        this->Size = System::Drawing::Size(300, 400);
        this->StartPosition = FormStartPosition::CenterScreen;
        this->FormBorderStyle = FormBorderStyle::FixedSingle;

        // Initialize controls
        textBox = gcnew TextBox();
        textBox->Location = Point(20, 20);
        textBox->Size = Drawing::Size(240, 30);
        textBox->ReadOnly = true;
        this->Controls->Add(textBox);

        // Add buttons
        AddButton("1", Point(20, 70));
        AddButton("2", Point(80, 70));
        AddButton("3", Point(140, 70));
        AddButton("4", Point(20, 120));
        AddButton("5", Point(80, 120));
        AddButton("6", Point(140, 120));
        AddButton("7", Point(20, 170));
        AddButton("8", Point(80, 170));
        AddButton("9", Point(140, 170));
        AddButton("0", Point(80, 220));

        AddButton("+", Point(200, 70));
        AddButton("-", Point(200, 120));
        AddButton("*", Point(200, 170));
        AddButton("/", Point(200, 220));
        AddButton("C", Point(20, 220), Drawing::Size(50, 30));
        AddButton("=", Point(140, 220), Drawing::Size(50, 30));
    }

    // Method to add button
    void AddButton(String^ text, Point location, Drawing::Size size = Drawing::Size(50, 50))
    {
        Button^ button = gcnew Button();
        button->Text = text;
        button->Location = location;
        button->Size = size;
        button->Click += gcnew EventHandler(this, &CalculatorForm::Button_Click);
        this->Controls->Add(button);
    }

    // Button click event handler
    void Button_Click(Object^ sender, EventArgs^ e)
    {
        Button^ button = safe_cast<Button^>(sender);
        String^ buttonText = button->Text;

        if (buttonText == "C")
        {
            // Clear current input
            currentInput = "";
        }
        else if (buttonText == "=")
        {
            // Perform calculation
            if (!currentInput->IsEmpty)
            {
                num2 = Double::Parse(currentInput);
                switch (operation)
                {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    result = num1 / num2;
                    break;
                }
                currentInput = result.ToString();
                num1 = result;
            }
        }
        else if (buttonText == "+" || buttonText == "-" || buttonText == "*" || buttonText == "/")
        {
            // Set operation
            if (!currentInput->IsEmpty)
            {
                num1 = Double::Parse(currentInput);
                operation = buttonText[0];
                currentInput = "";
            }
        }
        else
        {
            // Append number
            currentInput += buttonText;
        }

        // Update text box
        textBox->Text = currentInput;
    }
};

// Main function
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew CalculatorForm());
    return 0;
}
