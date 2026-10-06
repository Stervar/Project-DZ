import java.util.Scanner;

public class Work1 {
  
    public static void main(String[] args) { 
        Integer controllerMaxHeight = 4000; // Максимальная высота контроллера (мм)
        Integer passengerCarMaxWeight = 3500; // Максимальный вес легкового ТС (кг)
        Integer passengerCarPrice = 100; // Стоимость проезда легкового ТС (руб)
        Integer cargoCarPrice = 250; // Стоимость проезда грузового ТС (руб)
        Integer vehicleAdditionalPrice = 200; // Стоимость за багаж (руб)

        Scanner scanner = new Scanner(System.in);

        // Цикл для ввода данных 5 машин
        for (int i = 0; i < 5; i++) {
            System.out.println("\n--- Оформление ТС №" + (i + 1) + " ---");
            
            System.out.println("Введите вес в кг ТС:");
            Integer currentCarWeight = scanner.nextInt();
            
            System.out.println("Введите высоту в мм ТС:");
            Integer currentCarHeight = scanner.nextInt();
            
            System.out.println("Введите true, если данное ТС содержит багаж, а false в противном случае:");
            Boolean isVehicleAdditional = scanner.nextBoolean();

        
            

            if (currentCarHeight > controllerMaxHeight) {
                System.out.println("Данное ТС не может проехать (превышена максимальная высота)!");
            } else {
                int finalPrice = 0;

            
                if (currentCarWeight <= passengerCarMaxWeight) {
                    finalPrice = passengerCarPrice; // Легковое
                } else {
                    finalPrice = cargoCarPrice; // Грузовое
                }

                if (isVehicleAdditional) {
                    finalPrice += vehicleAdditionalPrice;
                }

                System.out.println("Стоимость проезда для данного ТС составляет: " + finalPrice + " руб.");
            }
            
 
        }
        
        scanner.close(); 
    }
}
