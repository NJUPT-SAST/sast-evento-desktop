#include <Infrastructure/Network/network.h>
#include <Infrastructure/Utils/Logger.h>
#include <Version.h>
#include <app.h>
#include <filesystem>
#include <spdlog/spdlog.h>

int main(int argc, char** argv) {
    Logger logger(Logger::Level::debug,
                  (std::filesystem::temp_directory_path() / "NJUPT-SAST" / "logs" / "evento.log")
                      .string());
    spdlog::info("SAST Evento version: v" VERSION_FULL);
    auto ui = App::create();
    ui->set_version_string("v" VERSION_FULL);
    ui->on_loginClicked(start_sast_link);
    ui->run();
}
