find -name "*.sh" -exec sh -c 'for f do basename -- "$f" .sh;done' sh {} +
