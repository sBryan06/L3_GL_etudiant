#ifndef CHRONO_HPP_
#define CHRONO_HPP_

#include <chrono>

/// \brief Chronomètre pour mesurer des durées.
///
/// Exemple d'utilisation :
/// Chrono chrono;
/// chrono.start();
/// ...
/// chrono.stop();
/// std::cout << "temps écoulé : " << chrono.elapsed() << std::endl;
class Chrono {

    private:
        std::chrono::time_point<std::chrono::system_clock> _t0;
        std::chrono::time_point<std::chrono::system_clock> _t1;
        bool _isRunning;

    public:
        /// \brief Constructeur.
        Chrono();

        /// \brief Remet la mesure à zéro.
        ///
        /// Ne change pas l'état démarré/arrêté du chronomètre.
        void reset();

        /// \brief Remet à zéro et démarre une nouvelle mesure.
        void start();

        /// \brief Arrête la mesure.
        void stop();

        /// \brief Retourne le temps écoulé.
        ///
        /// Ne change pas l'état démarré/arrêté du chronomètre.
        double elapsed();
};

#endif

