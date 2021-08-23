#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
    if (lst && cmp)
        for (t_list *temp1 = lst; temp1; temp1 = temp1->next)
            for (t_list *temp2 = lst; temp2->next; temp2 = temp2->next)
                if (cmp(temp2->data, temp2->next->data))
                    mx_swap_node(&temp2->data, &temp2->next->data);  
  
    return lst;
}

// t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void*b)) {
//     t_list *current = list;
//     t_list *next_node = list->next;
//     while (current) {
//         next_node = current->next;
//         while (next_node) {
//             if (cmp(current->data, next_node->data))
//                 mx_swap_node(current, next_node);
//             next_node = next_node->next;
//         }
//         current = current->next;
//     }
//     return current;
// }
