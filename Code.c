#include <stdio.h>

int main() {
    int age, gender;
    float weight, height, bmr, calories;
    int activityLevel;

    printf("🔢 Calorie Calculator 🔢\n");

    printf("Enter your age (in years): ");
    scanf("%d", &age);

    printf("Enter your gender (1 for Male, 2 for Female): ");
    scanf("%d", &gender);

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    // Calculate BMR
    if (gender == 1) {
        bmr = 10 * weight + 6.25 * height - 5 * age + 5;
    } else {
        bmr = 10 * weight + 6.25 * height - 5 * age - 161;
    }

    printf("\nSelect your activity level:\n");
    printf("1. Sedentary (little or no exercise)\n");
    printf("2. Lightly active (1-3 days/week)\n");
    printf("3. Moderately active (3-5 days/week)\n");
    printf("4. Very active (6-7 days/week)\n");
    printf("5. Super active (twice/day training)\n");
    printf("Enter choice (1-5): ");
    scanf("%d", &activityLevel);

    switch (activityLevel) {
        case 1:
            calories = bmr * 1.2;
            break;
        case 2:
            calories = bmr * 1.375;
            break;
        case 3:
            calories = bmr * 1.55;
            break;
        case 4:
            calories = bmr * 1.725;
            break;
        case 5:
            calories = bmr * 1.9;
            break;
        default:
            printf("Invalid activity level selected. Using sedentary level.\n");
            calories = bmr * 1.2;
    }

    printf("\n✅ Your estimated daily calorie requirement: %.2f kcal\n", calories);

    return 0;
}
