#include <iostream>
#include <memory>
#include "ServiceFactory.h"
#include "CatCheckupFactory.h"
#include "DogVaccinationFactory.h"
#include "ExoticAnimalSurgeryFactory.h"

void provideService(const ServiceFactory& factory) {
    std::unique_ptr<Service> service(factory.createService());
    std::cout << service->provide() << std::endl;
}

int main() {
    CatCheckupFactory catFactory;
    DogVaccinationFactory dogFactory;
    ExoticAnimalSurgeryFactory exoticFactory;

    provideService(catFactory);
    provideService(dogFactory);
    provideService(exoticFactory);

    return 0;
}
