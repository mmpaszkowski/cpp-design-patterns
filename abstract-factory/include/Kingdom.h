//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_KINGDOM_H
#define CPP_DESIGN_PATTERNS_KINGDOM_H

#include "Army.h"
#include "Castle.h"
#include "King.h"
#include "KingdomFactory.h"

#include <memory>
#include <stdexcept>

namespace dp
{

/**
 * @enum KingdomType
 * @brief Specifies types of kingdoms supported.
 */
enum class KingdomType
{
    Elf, ///< Elven kingdom
    Orc  ///< Orcish kingdom
};

/**
 * @brief Converts KingdomType enum to a string_view representation.
 *
 * @param type KingdomType enum value
 * @return std::string_view corresponding to the enum value
 * @throws std::invalid_argument if the KingdomType is unknown
 */
std::string_view to_string(KingdomType type);

/**
 * @class KingdomFactoryMaker
 * @brief Factory maker class to create specific KingdomFactory instances.
 *
 * This class provides a static method to create a concrete factory
 * based on the specified KingdomType.
 * Instantiation of this class is disabled.
 */
class KingdomFactoryMaker
{
    KingdomFactoryMaker() = delete; ///< Prevent instantiation

public:
    /**
     * @brief Creates a KingdomFactory corresponding to the given KingdomType.
     *
     * @param type The kingdom type for which to create the factory.
     * @return std::unique_ptr<KingdomFactory> A pointer to the created factory.
     * @throws std::invalid_argument if the KingdomType is unknown.
     */
    static std::unique_ptr<KingdomFactory> makeFactory(KingdomType type);
};

/**
 * @class Kingdom
 * @brief Represents a kingdom composed of a King, Castle, and Army.
 *
 * Owns the components via unique pointers and provides access to them.
 */
class Kingdom
{
public:
    /**
     * @brief Constructs a Kingdom with the given components.
     *
     * Takes ownership of the King, Castle, and Army objects.
     *
     * @param king Unique pointer to a King instance.
     * @param castle Unique pointer to a Castle instance.
     * @param army Unique pointer to an Army instance.
     */
    Kingdom(std::unique_ptr<King>&& king, std::unique_ptr<Castle>&& castle, std::unique_ptr<Army>&& army) noexcept;

    /**
     * @brief Virtual destructor for safe polymorphic destruction.
     */
    virtual ~Kingdom()                     = default;
    Kingdom(Kingdom&&) noexcept            = default;
    Kingdom& operator=(Kingdom&&) noexcept = default;

    /// Deleted copy constructor to prevent copying.
    Kingdom(const Kingdom&) = delete;

    /// Deleted copy assignment to prevent copying.
    Kingdom& operator=(const Kingdom&) = delete;

    /**
     * @brief Gets a const reference to the King of the kingdom.
     * @return Reference to the King component.
     */
    [[nodiscard]] const King& getKing() const noexcept { return *king_; }

    /**
     * @brief Gets a const reference to the Castle of the kingdom.
     * @return Reference to the Castle component.
     */
    [[nodiscard]] const Castle& getCastle() const noexcept { return *castle_; }

    /**
     * @brief Gets a const reference to the Army of the kingdom.
     * @return Reference to the Army component.
     */
    [[nodiscard]] const Army& getArmy() const noexcept { return *army_; }

private:
    std::unique_ptr<King>   king_;   ///< Owned King instance
    std::unique_ptr<Castle> castle_; ///< Owned Castle instance
    std::unique_ptr<Army>   army_;   ///< Owned Army instance
};

} // namespace dp

#endif // CPP_DESIGN_PATTERNS_KINGDOM_H