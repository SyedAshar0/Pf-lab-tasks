#include <stdio.h>
#include <stdlib.h>

struct Box {
    int weight;
    int numberNestedBoxes;
    struct Box* nestedBoxes;
};

int calculateTotalWeight(struct Box* box) {
    int totalWeight = box->weight;
    int i;
    for ( i = 0; i < box->numberNestedBoxes; i++) {
        totalWeight += calculateTotalWeight(&box->nestedBoxes[i]);
    }
    return totalWeight;
}

void inputBox(struct Box* box) {
int i;
    printf("Enter the weight of the box: ");
    scanf("%d", &box->weight);

    printf("Enter the number of nested boxes: ");
    scanf("%d", &box->numberNestedBoxes);

    if (box->numberNestedBoxes > 0) {
        box->nestedBoxes = (struct Box*)malloc(box->numberNestedBoxes * sizeof(struct Box));
 
        for (i = 0; i < box->numberNestedBoxes; i++) {
            printf("\nEnter details for nested box %d:\n", i + 1);
            inputBox(&box->nestedBoxes[i]);
        }
    } else {
        box->nestedBoxes = NULL;
    }
}

int main() {
    struct Box outerBox;

    printf("Enter details for the outer box:\n");
    inputBox(&outerBox);

    int totalWeight = calculateTotalWeight(&outerBox);
    printf("\nTotal weight of the box is: %d\n", totalWeight);

    free(outerBox.nestedBoxes);

    return 0;
}

