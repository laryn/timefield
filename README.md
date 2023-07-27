# Timefield

Provides a field to store time. Timefield is a Field API field that can store 3
types of time values: a simple time value, a start time and end time, or a
combination of these two with a basic weekly repeat value. The values are stored
in the database as integer offsets from 12AM.  If the second value continues
into the next day, i.e. 8PM - 2AM, the second value is stored as an offset +1
day.

The goal of this field is to provide time storage that is not dependent on the
Gregorian calendar.

## Installation

Install this module using the official Backdrop CMS instructions at
<https://backdropcms.org/guide/modules>.

## Usage

Timefield module provides a field type 'timefield' with a default JQuery widget.
The timefield can have an optional 'to time' and various input formats,
depending on your preference. The field is also multi-value capable.

There are a three display formatters, time (with optional to time, duration,
and a mini-calendar output. You can configure various output formats in the
format settings dialog option on the "Manage Display" section of the Field API
UI.

## License

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.

## Maintainers

* [herbdool](https://github.com/herbdool)
* Seeking co-maintainers.

## Credits

Ported to Backdrop by [herbdool](https://github.com/herbdool).

This module is ported from the Timefield module for Drupal,
originally written and maintained by:

* [awm](https://www.drupal.org/u/awm)
* [keen-ondigital](https://www.drupal.org/u/keen-ondigital)
* [wesnick](https://www.drupal.org/u/wesnick)
