#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

using namespace std;

void SocketServer() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);

    // Crear socket
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        cerr << "Error al crear socket" << endl;
        return;
    }

    // Opción de socket para reutilizar la dirección
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt))) {
        cerr << "Error en setsockopt" << endl;
        return;
    }

    // Configurar dirección del socket
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(5001);

    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEPORT, &opt, sizeof(opt))) {
        cerr << "Error en setsockopt" << endl;
        return;
    }

    // Enlazar socket a la dirección y puerto especificados
    if (bind(server_fd, (struct sockaddr *) &address, sizeof(address)) < 0) {
        cerr << "Error en bind" << endl;
        return;
    }

    // Escuchar conexiones entrantes
    if (listen(server_fd, 3) < 0) {
        cerr << "Error en listen" << endl;
        return;
    }

    cout << "Servidor en espera de conexiones..." << endl;


    // Aceptar nueva conexión
    if ((new_socket = accept(server_fd, (struct sockaddr *) &address, (socklen_t *) &addrlen)) < 0) {
        cerr << "Error en accept" << endl;
        return;
    }

    cout << "Nueva conexión aceptada" << endl;

    // Procesar mensajes entrantes
    char buffer[1024] = {0};
    int valread = read(new_socket, buffer, 1024);
    if (valread <= 0) {
        cout << "Cliente desconectado" << endl;
        close(new_socket);
        return;
    }
    cout << "Mensaje recibido: " << buffer << endl;

    char respuesta[] = "Mensaje recibido.\n";
    send(new_socket, respuesta, sizeof(respuesta), 0);
    cout << "Respuesta: " << respuesta << endl;

    if (close(server_fd) == -1) {
        cerr << "Error al cerrar el socket: " << strerror(errno) << endl;
        return;
    }
    if (close(new_socket) == -1) {
        cerr << "Error al cerrar el socket: " << strerror(errno) << endl;
        return;
    }
}

int main(int arg, char const *argv[]){
    while(true) { SocketServer();}
}