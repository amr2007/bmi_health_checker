#include <stdio.h>

int main()
{
    float BMI, weight, height;
    printf("Enter your weight(KG):\n");
    scanf("%f", &weight);

    printf("Enter your Height(CM):\n");
    scanf("%f", &height);

    BMI = (weight * 10000) / (height * height);

    printf("Your BMI is %.1f\n", BMI);

    if (BMI < 18.5)
    {
        printf("Underweight\n");
        printf("💡 Advice: You may need to gain healthy weight. Consult a nutritionist and consider increasing protein and calorie intake.\n");
    }
    else if (BMI <= 24.9)
    {
        printf("Normal weight\n");
        printf("✅ Advice: Great! Maintain your weight with a balanced diet and regular exercise.\n");
    }
    else if (BMI <= 29.9)
    {
        printf("Overweight\n");
        printf("⚠️ Advice: You're slightly above the ideal range. Try regular cardio, eat more greens, and reduce processed foods.\n");
    }
    else if (BMI <= 34.9)
    {
        printf("Obese (class 1)\n");
        printf("🚨 Advice: Time to take serious action. Create a structured diet and fitness plan. Consider professional help.\n");
    }
    else if (BMI <= 39.9)
    {
        printf("Obese (class 2)\n");
        printf("🚨 Advice: Health risks are high. Get a medical check-up and build a sustainable weight-loss plan with a doctor.\n");
    }
    else
    {
        printf("Obese (class 3)\n");
        printf("🚑 Advice: This level of obesity can be life-threatening. Please consult a healthcare provider immediately.\n");
    }

    return 0;
}
