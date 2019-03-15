/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef FLECS_COMPONENTS_INPUT_BAKE_CONFIG_H
#define FLECS_COMPONENTS_INPUT_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs>
#include <flecs.components.transform>

/* Headers of private dependencies */
#ifdef FLECS_COMPONENTS_INPUT_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if FLECS_COMPONENTS_INPUT_IMPL && defined _MSC_VER
#define FLECS_COMPONENTS_INPUT_EXPORT __declspec(dllexport)
#elif FLECS_COMPONENTS_INPUT_IMPL
#define FLECS_COMPONENTS_INPUT_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define FLECS_COMPONENTS_INPUT_EXPORT __declspec(dllimport)
#else
#define FLECS_COMPONENTS_INPUT_EXPORT
#endif

#endif

