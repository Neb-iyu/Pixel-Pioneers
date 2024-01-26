# Flowchart

Note: This is a simplified version of the programs algorithm for deep understanding please read the pseudocode version
  
```mermaid
graph TD;
  A([Start]) -->  B("'DAYS = 30
  NUMBER_OF_WAREHOUSE = 4
  int i = 0'");
  B --> D[/"Enter
  Warehouse(warehousenum):
  Product type(prtype):
  Quantity of product(quantity):"/];
  D --> E["warehouse[warehousenum - 1][i] = quantity
  products[prtype] += quantity
  table[prtype-1][warehousenum-1] += quantity"];
  E --> F[i++] --> G{"Is i'<'DAYS"};
  G -- Yes --> D;
  G -- No --> H[/Print tabular format/];
