DESCRIPTION
--------------

Timefield is a Field API field that can store 3 types of time values: a simple
time value, a start time and end time, or a combination of these two with a 
basic weekly repeat value.  The values are stored in the database as integer 
offsets from 12AM.  If the second value continues into the next day, 
i.e. 8PM - 2AM, the second value is stored as an offset +1 day.

The goal of this field is to provide time storage that is not dependant on the 
Gregorian calendar, as well as to store a taxonomy capable of encapsulating 
date-agnostic time values, like "Morning", "Mid-morning" with autotagging 
capabilities.  This is achieved through the timefield_taxonomy module.

USAGE
-------
Timefield module provides a field type 'timefield' with a default JQuery widget.
The timefield can have an optional 'to time' and various input formats, 
depending on your preference.  While this field is multi-value capable, 
I am not really sure about a use-case for this.  
There are a two display formatters, time and duration.  You can configure 
various output formats in the format settings dialog option on the 
"Manage Display" section of the Field API UI.

