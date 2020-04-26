$x = 1; $y = 10;
sub sub1 {
return $x;
}
sub sub2 {
local $y = 24;
return $y;
}
sub sub3 {
my $x = 1564;
return sub1();
}

print "static x: ", sub3(), "\n";
print "dynamic y: ", sub2(), "\n";
