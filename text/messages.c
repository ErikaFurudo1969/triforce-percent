// 0x900: Debugging

DECLARE_MESSAGE(0x0901, BOX_BLUE, POS_MIDDLE,
    UNSKIPPABLE ITEM_ICON("\x35") QUICKTEXT_ENABLE 
    "Frog"
)

// 0xB00: Key of Courage

DECLARE_MESSAGE(0x0B10, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Oh um. Are you looking for bugs," NEWLINE
    "too? I love bugs! But I can't" NEWLINE
    "find any. How's your luck?"
)

DECLARE_MESSAGE(0x0B11, BOX_BLACK, POS_MIDDLE,
    "What is that? I asked you for a" NEWLINE
    "bug!"
)

DECLARE_MESSAGE(0x0B12, BOX_BLACK, POS_MIDDLE,
    "No, no! These are crawlies!" NEWLINE
    "Crawlies are dumb. I want a flying" NEWLINE
    "bug. You know, colorful, with wings." BOX_BREAK
    "They like flowers, so you might" NEWLINE
    "find one somewhere people grow lots" NEWLINE
    "of different kinds of flowers."
)

DECLARE_MESSAGE(0x0B13, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Wow, you actually brought it!" NEWLINE
    QUICKTEXT_ENABLE "Thanks!" QUICKTEXT_DISABLE BOX_BREAK UNSKIPPABLE
    "You're a nice guy, unlike that Mido..." NEWLINE
    "He never talks to me. Except one" NEWLINE
    "time he gave me this, and ordered" NEWLINE
    "me to keep it safe." BOX_BREAK UNSKIPPABLE
    "But I don't really want it... You can" NEWLINE
    "have it!"
)

DECLARE_MESSAGE(0x0004, BOX_BLUE, POS_MIDDLE,
    UNSKIPPABLE ITEM_ICON("\x31") QUICKTEXT_ENABLE "You got the " COLOR(RED) "Magic Powder" COLOR(WHITE) "!" QUICKTEXT_DISABLE NEWLINE
    "It smells like mushrooms."
)

DECLARE_MESSAGE(0x0B15, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "I don't think you can use it by" NEWLINE
    "yourself, though..."
)

DECLARE_MESSAGE(0x0B16, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Thanks for bringing me that bug!"
)

DECLARE_MESSAGE(0x009C, BOX_BLACK, POS_VARIABLE,
    UNSKIPPABLE
    "What's that? You're lookin' for a" NEWLINE
    "flyin' bug?" BOX_BREAK UNSKIPPABLE
    "I usually don' carry anything like" NEWLINE
    "that, but my kid has been catchin'" NEWLINE
    "a lot of 'em lately." BOX_BREAK UNSKIPPABLE
    "He always leaves some around, and" NEWLINE
    "I bet he'll be happy to know he" NEWLINE
    "helped his old man make a sale!" NEWLINE
    TEXT_SPEED("\x02") 
    QUICKTEXT_ENABLE "Har" QUICKTEXT_DISABLE " " 
    QUICKTEXT_ENABLE "har" QUICKTEXT_DISABLE " " 
    QUICKTEXT_ENABLE "har" QUICKTEXT_DISABLE "!" 
    TEXT_SPEED("\x00") BOX_BREAK UNSKIPPABLE
    "Lemme put one out for ya." EVENT
)

DECLARE_MESSAGE(0x0B28, BOX_BLACK, POS_MIDDLE,
    QUICKTEXT_ENABLE  COLOR(RED) "Butterfly   35 Rupees" NEWLINE
    COLOR(WHITE) "This is a beautiful red and" NEWLINE
    "yellow butterfly. You can keep it" NEWLINE
    "in one of your bottles." QUICKTEXT_DISABLE PERSISTENT
)

DECLARE_MESSAGE(0x0B29, BOX_BLACK, POS_MIDDLE,
    QUICKTEXT_ENABLE "Butterfly   35 Rupees" QUICKTEXT_DISABLE NEWLINE
    NEWLINE TWO_CHOICE COLOR(GREEN) "Buy" NEWLINE
    "Don't buy" COLOR(WHITE)
)

DECLARE_MESSAGE(0x00F9, BOX_BLUE, POS_MIDDLE,
    UNSKIPPABLE ITEM_ICON("\x1E") QUICKTEXT_ENABLE "You got a " COLOR(RED) "Butterfly" COLOR(WHITE) "!" QUICKTEXT_DISABLE NEWLINE
    "Bug enthusiasts love these!"
)

DECLARE_MESSAGE(0x0B30, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Hey, Kokiri! I smell something" NEWLINE
    "on you..." BOX_BREAK UNSKIPPABLE
    "That smells like my " COLOR(RED) "Magic Powder" COLOR(WHITE) "." NEWLINE
    QUICKTEXT_ENABLE "Give it back!" QUICKTEXT_DISABLE NEWLINE
    TWO_CHOICE COLOR(GREEN) "Yes" NEWLINE
    "No"
)

DECLARE_MESSAGE(0x0B31, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "You're as bad as that other" NEWLINE
    "Kokiri kid!"
)

DECLARE_MESSAGE(0x0B32, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "I knew it, it's my " COLOR(RED) "Magic Powder" COLOR(WHITE) "!" BOX_BREAK UNSKIPPABLE
    "That other nasty Kokiri kid stole" NEWLINE
    "it from me. He said that because" NEWLINE
    "it's made of forest mushrooms," NEWLINE
    "it's his property." BOX_BREAK UNSKIPPABLE
    "The nerve he had! Who made him" NEWLINE
    "the owner of the forest?!" BOX_BREAK UNSKIPPABLE
    "I plucked those mushrooms, dried" NEWLINE
    "them, and mashed them myself!" BOX_BREAK UNSKIPPABLE
    SHIFT("\x40") "grumble..." BOX_BREAK UNSKIPPABLE
    "Anyway, it's not your fault." NEWLINE
    "Thank you for bringing it back." BOX_BREAK UNSKIPPABLE
    "As a reward, I'll use this powder" NEWLINE
    "on your masks to make them more" NEWLINE
    "powerful!"
)

DECLARE_MESSAGE(0x0B33, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "If you have any masks, show them" NEWLINE
    "to me!"
)

DECLARE_MESSAGE(0x0B34, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Let me sprinkle some of this" NEWLINE
    COLOR(RED) "Magic Powder" COLOR(WHITE) " on that mask!"
)

DECLARE_MESSAGE(0x0013, BOX_BLUE, POS_MIDDLE,
    UNSKIPPABLE ITEM_ICON("\x27") QUICKTEXT_ENABLE "You upgraded the " COLOR(RED) "Bunny Hood" COLOR(WHITE) "!" QUICKTEXT_DISABLE NEWLINE
    "The magic in its long ears" NEWLINE
    "allows the wearer to run" NEWLINE
    "with great speed."
)

DECLARE_MESSAGE(0x0016, BOX_BLUE, POS_MIDDLE,
    UNSKIPPABLE ITEM_ICON("\x2A") QUICKTEXT_ENABLE "You upgraded the " COLOR(RED) "Gerudo Mask" COLOR(WHITE) "!" QUICKTEXT_DISABLE NEWLINE
    "Now you can charm people with" NEWLINE
    "the perfect lady's disguise..." NEWLINE
    "even Gerudo themselves!"
)

DECLARE_MESSAGE(0x0B40, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "A Gerudo child far from the desert?" NEWLINE
    "My! Your father must be Hylian." BOX_BREAK UNSKIPPABLE
    "Is this your first time visiting?" NEWLINE
    "Come in and greet your Gerudo" NEWLINE
    "sisters!"
)

DECLARE_MESSAGE(0x0B50, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "So you come from outside? I bet" NEWLINE
    "you had bountiful crops out there." BOX_BREAK UNSKIPPABLE
    "Heh, here not even cacti bloom in" NEWLINE
    "this desert."
)

DECLARE_MESSAGE(0x0B51, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Our fortress seems to be smaller" NEWLINE
    "every day." BOX_BREAK UNSKIPPABLE
    "Someday, I suppose there'll be" NEWLINE
    "nothing left but desert."
)

DECLARE_MESSAGE(0x0B52, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "The Royal Family of Hyrule has" NEWLINE
    "forsaken our people. They are" NEWLINE
    "leaving us with no other option" NEWLINE
    "than to fight!"
)

DECLARE_MESSAGE(0x0B53, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Oh, child. I pity you. Soon, you" NEWLINE
    "will have to pick a side."
)

DECLARE_MESSAGE(0x0B60, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Hm? A kid?" NEWLINE
    "What are you doing here?" BOX_BREAK UNSKIPPABLE
    "Did your mother send you here to" NEWLINE
    "meet the great Nabooru?" BOX_BREAK UNSKIPPABLE
    "How nice of her. I'm pleased she" NEWLINE
    "wishes her child to know of her" NEWLINE
    "Gerudo origins." BOX_BREAK UNSKIPPABLE
    QUICKTEXT_ENABLE "Very well!" QUICKTEXT_DISABLE EVENT
)
    
DECLARE_MESSAGE(0x0B61, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Guards, you may leave the girl" NEWLINE
    "and I alone." EVENT
)

DECLARE_MESSAGE(0x0B62, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Well, enough acting, " TEXT_SPEED("\x03") "boy" TEXT_SPEED("\x00") ". Yes, I" NEWLINE
    "can see through your disguise." EVENT
)

DECLARE_MESSAGE(0x0B63, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "A Hylian child pretending to be a" NEWLINE
    "Gerudo. I admire your courage, but" NEWLINE
    "how will this help you in stopping" NEWLINE
    "the great Ganondorf?" BOX_BREAK UNSKIPPABLE
    "That is what you want, isn't it?" EVENT
)

DECLARE_MESSAGE(0x0B64, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "You may think I'm your enemy," NEWLINE
    "being a Gerudo like him." BOX_BREAK UNSKIPPABLE
    "The truth is, that man is as much" NEWLINE
    "against our kind as he is against" NEWLINE
    "yours." BOX_BREAK UNSKIPPABLE
    "The power of the Goddesses is all" NEWLINE
    "he desires, even if that means" NEWLINE
    "betraying us all." EVENT
)

DECLARE_MESSAGE(0x0B65, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "But while your goal is admirable," NEWLINE
    "you're still a child. No kid will" NEWLINE
    "stop Ganondorf." BOX_BREAK UNSKIPPABLE
    "An adult with your desire, however..." EVENT
)

DECLARE_MESSAGE(0x0B66, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Ages ago, the Gerudo created a" NEWLINE
    "melody known as the " COLOR(BLUE) "Song of Time" COLOR(WHITE) "." NEWLINE
    "It is such powerful magic that it" NEWLINE
    "was divided into two halves." BOX_BREAK UNSKIPPABLE
    "The first half was granted to the" NEWLINE
    "Royal Family, while the second" NEWLINE
    "half remained in this land."
)

//  "text text text text text text te"
DECLARE_MESSAGE(0x0B67, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Do you know what lies beyond the" NEWLINE
    "desert?" BOX_BREAK UNSKIPPABLE
    "There's a place there known as the" NEWLINE
    COLOR(TYPE1_ORANGE) "Desert Colossus" COLOR(WHITE) "." BOX_BREAK UNSKIPPABLE
    "We Gerudo have used it as a temple" NEWLINE
    "for generations, but it was built" NEWLINE
    "by the ancient Sages." BOX_BREAK UNSKIPPABLE
    "It is a two-sided dungeon made for" NEWLINE
    "a time-traveling Hero who can go" NEWLINE
    "from child to adult and back."
)

//  "text text text text text text te"
DECLARE_MESSAGE(0x0B68, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "As I said, you're just a kid now." NEWLINE
    "But I sense that you can control" NEWLINE
    "even greater magic than just this" NEWLINE
    "mask."
)

DECLARE_MESSAGE(0x0B69, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "If you're truly who I think you" NEWLINE
    "are, I can teach you both halves" NEWLINE
    "of the " COLOR(BLUE) "Song of Time" COLOR(WHITE) "." BOX_BREAK UNSKIPPABLE
    "By playing it, you'll be able to" NEWLINE
    "overcome the trials of the " COLOR(TYPE1_ORANGE) "Desert" NEWLINE
    "Colossus" COLOR(WHITE) "..." BOX_BREAK UNSKIPPABLE
    "...and you'll become a man who" NEWLINE
    "can stand against Ganondorf."
)

DECLARE_MESSAGE(0x0B6A, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Is this really what you want?" NEWLINE
    NEWLINE
    TWO_CHOICE COLOR(GREEN) "Yes" NEWLINE
    "No"
)

DECLARE_MESSAGE(0x0B6B, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Come now, I know you want to" NEWLINE
    "stop Ganondorf." EVENT
)

DECLARE_MESSAGE(0x087A, BOX_OCARINA, POS_VARIABLE,
    QUICKTEXT_ENABLE SHIFT("\x0E") "This is the " COLOR(BLUE) "full Song of Time" COLOR(WHITE) "..." NEWLINE
    NEWLINE
    NEWLINE
    QUICKTEXT_DISABLE OCARINA
)

DECLARE_MESSAGE(0x089D, BOX_OCARINA, POS_VARIABLE,
    QUICKTEXT_ENABLE  SHIFT("\x08") "You played the " COLOR(BLUE) "full Song of Time" COLOR(WHITE) "." NEWLINE
    NEWLINE
    NEWLINE
    QUICKTEXT_DISABLE
)

DECLARE_MESSAGE(0x00D5, BOX_BLUE, POS_MIDDLE,
    UNSKIPPABLE
    SHIFT("\x28") "You've learned the" NEWLINE 
    SHIFT("\x29") COLOR(BLUE) "full Song of Time" COLOR(WHITE) "!" BOX_BREAK UNSKIPPABLE
    "This song is proof of a true Hero's" NEWLINE
    "courage." BOX_BREAK UNSKIPPABLE
    "Play it as a child to become an" NEWLINE
    "adult, and as an adult to become" NEWLINE
    "a child."
)

DECLARE_MESSAGE(0x0B6C, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "I'll see you again in a few years!"
)


// 0xC00: Key of Power

DECLARE_MESSAGE(0x0C10, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Whaaaat?! Impossible!" BOX_BREAK UNSKIPPABLE
    "I'm the fastest man in Hyrule!" NEWLINE
    "How did you get here before I did?!" EVENT
)

DECLARE_MESSAGE(0x0C11, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Ahem, sorry about that!" NEWLINE
    "What I mean is that you're" NEWLINE
    "extraordinary!" BOX_BREAK UNSKIPPABLE
    "Meet me in the middle of Hyrule" NEWLINE
    "Field to get a " COLOR(RED) "special reward" COLOR(WHITE) "!"
)

DECLARE_MESSAGE(0x0C20, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    COLOR(RED) "Ha, you fool!" COLOR(WHITE) BOX_BREAK UNSKIPPABLE
    COLOR(RED) "This is the only reward cheaters" NEWLINE
    "like you get!" COLOR(WHITE)
)

DECLARE_MESSAGE(0x0C30, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "huff... huff..." BOX_BREAK UNSKIPPABLE
    "I guess you're a better cheater than" NEWLINE
    "I am..." BOX_BREAK UNSKIPPABLE
    "I never thought anyone would find a" NEWLINE
    "power like the one I did, seven years" NEWLINE
    "ago..." EVENT
)

DECLARE_MESSAGE(0x0C31, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "That day, after Hyrule Castle was" NEWLINE
    "attacked, I went on my usual running" NEWLINE
    "route to clear my mind." BOX_BREAK UNSKIPPABLE
    "Somewhere out in the field here, I" NEWLINE
    "stepped on this object, lying on the" NEWLINE
    "ground." BOX_BREAK UNSKIPPABLE
    "It must have been dropped by someone" NEWLINE
    "who fled town." EVENT
)

DECLARE_MESSAGE(0x0C32, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "It was a golden locket. I tried it" NEWLINE
    "on and felt this rush all over my" NEWLINE
    "body!" BOX_BREAK UNSKIPPABLE
    "I could run faster than I could" NEWLINE
    "ever imagine." BOX_BREAK UNSKIPPABLE
    "In fact, I could run faster than" NEWLINE
    "light! That's how I was able to" NEWLINE
    "finish the race before I started," NEWLINE
    "and how I was just fighting you." EVENT
)

DECLARE_MESSAGE(0x0C33, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "But I now realize this has made" NEWLINE
    "me a terrible man." BOX_BREAK UNSKIPPABLE
    "I wanted to be the fastest so" NEWLINE
    "badly I tried to kill you!" BOX_BREAK UNSKIPPABLE
    SHIFT("\x28") "sniffle..." EVENT
)

DECLARE_MESSAGE(0x0C34, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "I just want to be my own self again," NEWLINE
    "to run free in the wild. I don't" NEWLINE
    "care about the magic anymore." BOX_BREAK UNSKIPPABLE
    "Here, you can have this." EVENT
)

DECLARE_MESSAGE(0x0068, BOX_BLUE, POS_MIDDLE,
    UNSKIPPABLE  ITEM_ICON("\x6F")  QUICKTEXT_ENABLE 
    "You obtained the " COLOR(LIGHTBLUE) "Sages' Charm" COLOR(WHITE) "!" QUICKTEXT_DISABLE NEWLINE
    "This locket amplifies and" NEWLINE
    "enhances the magic power" NEWLINE
    "of its wearer." BOX_BREAK UNSKIPPABLE ITEM_ICON("\x6F")
    "Equip the Sages' offerings" NEWLINE
    "to channel their power" NEWLINE
    "yourself!"
)


// 0xD00: Key of Wisdom

DECLARE_MESSAGE(0x0D20, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Welcome Link!" NEWLINE
    "I am the " COLOR(LIGHTBLUE) "Great Fairy of Wisdom" COLOR(WHITE) "." BOX_BREAK UNSKIPPABLE
    "For ages, I've offered guidance to" NEWLINE
    "those who seek enlightenment." NEWLINE
    "This, too, is why you're here."
)

DECLARE_MESSAGE(0x0D21, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "You have almost reached the end of" NEWLINE
    "your journey, but to prove your" NEWLINE
    "spirit's growth, you must allow the" NEWLINE
    "wisdom of the Sages to guide you." BOX_BREAK UNSKIPPABLE
    "This song is proof of that virtue," NEWLINE
    "and the final key to the Sacred" NEWLINE
    "Realm."
)

DECLARE_MESSAGE(0x086D, BOX_OCARINA, POS_VARIABLE,
    QUICKTEXT_ENABLE SHIFT("\x11") "Play using " COLOR(BLUE) "\x9F" COLOR(WHITE) " and " COLOR(YELLOW) "\xA1" COLOR(WHITE) "." NEWLINE
    NEWLINE
    NEWLINE
    QUICKTEXT_DISABLE OCARINA
)

DECLARE_MESSAGE(0x0871, BOX_OCARINA, POS_VARIABLE,
    QUICKTEXT_ENABLE SHIFT("\x11") "Play the " COLOR(LIGHTBLUE) "Overture of Sages" COLOR(WHITE) "!" NEWLINE
    NEWLINE
    NEWLINE
    QUICKTEXT_DISABLE OCARINA
)

DECLARE_MESSAGE(0x0074, BOX_BLUE, POS_MIDDLE,
    UNSKIPPABLE  
    SHIFT("\x28") "You have learned the" NEWLINE
    SHIFT("\x29") COLOR(LIGHTBLUE) "Overture of Sages" COLOR(WHITE) "!!"
)

DECLARE_MESSAGE(0x0894, BOX_OCARINA, POS_VARIABLE,
    QUICKTEXT_ENABLE SHIFT("\x07") "You played the " COLOR(LIGHTBLUE) "Overture of Sages" COLOR(WHITE) "." NEWLINE
    NEWLINE
    NEWLINE
    QUICKTEXT_DISABLE
)

DECLARE_MESSAGE(0x088E, BOX_BLACK, POS_MIDDLE,
    QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Warp to the Sacred Realm?" COLOR(WHITE) QUICKTEXT_DISABLE NEWLINE NEWLINE
    TWO_CHOICE COLOR(GREEN) "OK" NEWLINE
    "No" COLOR(WHITE)
)

DECLARE_MESSAGE(0x0D23, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Play this song before the blade of" NEWLINE
    "destiny, and the path of the Sages" NEWLINE
    "shall be revealed."
)

DECLARE_MESSAGE(0x0D30, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE QUICKTEXT_ENABLE COLOR(RED)
    SHIFT("\x20") "You can't warp here!"
)

// 0xA00: Chamber of Sages / Triforce

DECLARE_MESSAGE(0x0A10, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Welcome, Link. I'm Rauru, the" NEWLINE
    "ancient Sage of Light." BOX_BREAK UNSKIPPABLE
    "Now that you hold the keys to the" NEWLINE
    "three sacred virtues, your heart" NEWLINE
    "is in perfect balance."
)

DECLARE_MESSAGE(0x0A11, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "The song you just played has" NEWLINE
    "awakened the other Sages, and they" NEWLINE
    "are on their way to joining us here." BOX_BREAK UNSKIPPABLE
    "You must receive a blessing from" NEWLINE
    "each of us." BOX_BREAK UNSKIPPABLE
    "Together, we will open the way to" NEWLINE
    "your goal!"
)

DECLARE_MESSAGE(0x0A20, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE COLOR(GREEN)
    "Link, the promise I made to you" NEWLINE
    "stays true. I will always be your" NEWLINE
    "friend."
)

DECLARE_MESSAGE(0x0A30, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE COLOR(RED)
    "The bond between the Goron race" NEWLINE
    "and the Royal Family is rock solid!" NEWLINE
    "Let's go, brother!"
)

DECLARE_MESSAGE(0x0A40, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE COLOR(BLUE)
    "I knew the hero would turn out" NEWLINE
    "to be a handsome man!" BOX_BREAK UNSKIPPABLE COLOR(BLUE)
    "Once this is all over, you must" NEWLINE
    "come visit me, all right?"
)

DECLARE_MESSAGE(0x0A50, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE COLOR(TYPE1_ORANGE)
    "Nice work! It looks like our" NEWLINE
    "song worked for you. From all the" NEWLINE
    "Gerudos, you have our support!"
)

DECLARE_MESSAGE(0x0A60, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE COLOR(TYPE1_PURPLE)
    "Undoubtedly, you are the boy" NEWLINE
    "from the forest who appeared" NEWLINE
    "in Princess Zelda's dreams." BOX_BREAK UNSKIPPABLE COLOR(TYPE1_PURPLE)
    "I am glad my charm found its" NEWLINE
    "way into your hands." BOX_BREAK UNSKIPPABLE COLOR(TYPE1_PURPLE)
    "I wish you well in fulfilling the" NEWLINE
    "great destiny that is before you."
)

DECLARE_MESSAGE(0x0A70, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Link, the great Hero of Time..." BOX_BREAK UNSKIPPABLE
    "The one with the three virtues of" NEWLINE
    "Courage, Power, and Wisdom in" NEWLINE
    "balance in your heart..." BOX_BREAK UNSKIPPABLE
    "The one with the ability to bend" NEWLINE
    "and shift time itself..."
)

DECLARE_MESSAGE(0x0A71, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "In this reality, we have only" NEWLINE
    "just met." BOX_BREAK UNSKIPPABLE
    "Yet we have known each other in" NEWLINE
    "ages past, and surely in other" NEWLINE
    "timelines of the present." BOX_BREAK UNSKIPPABLE
    "I sense that our destiny is about" NEWLINE
    "to change forever." BOX_BREAK UNSKIPPABLE
    "But I trust that you'll always use" NEWLINE
    "your strengths to protect Hyrule."
)

DECLARE_MESSAGE(0x0A72, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Are you ready, Link?" NEWLINE
    NEWLINE
    TWO_CHOICE COLOR(GREEN) "Are you Zelda?" NEWLINE
    "Are you a boy or a girl?"
)

DECLARE_MESSAGE(0x0A73, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "I guess that hasn't been much of" NEWLINE
    "a secret since " COLOR(RED) "Melee" COLOR(WHITE) ", huh?" BOX_BREAK UNSKIPPABLE
    "Would be nice if I could get my" NEWLINE
    "own game someday..."
)

DECLARE_MESSAGE(0x0A74, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Link, this isn't the time for" NEWLINE
    "nonsense!" BOX_BREAK UNSKIPPABLE
    "O-of course I-I'm a boy..."
)

DECLARE_MESSAGE(0x0A75, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE
    "Let's not keep everyone waiting!"
)

DECLARE_MESSAGE(0x0ACE, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE ITEM_ICON("\x73") QUICKTEXT_ENABLE
    "You got the " COLOR(YELLOW) "Triforce" COLOR(WHITE) "!!!" QUICKTEXT_DISABLE NEWLINE
    "After 23 years, the dreams of" NEWLINE
    "millions of players around the" NEWLINE
    "world have finally come true!"
)

// 0xE00: Ending Sequence

DECLARE_MESSAGE(0x0E00, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE COLOR(YELLOW) TEXT_SPEED("\x02")
    SHIFT("\x45") "Link..." FADE("\x46")
)

DECLARE_MESSAGE(0x0E01, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE COLOR(YELLOW) TEXT_SPEED("\x01")
    SHIFT("\x45") "Link." FADE("\x46")
)

DECLARE_MESSAGE(0x0E02, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE COLOR(YELLOW) TEXT_SPEED("\x01")
    "It is we, the Golden Goddesses"  NEWLINE
    "of the Triforce, Din, Nayru," NEWLINE
    "and Farore..." FADE("\x46")
)

DECLARE_MESSAGE(0x0E03, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE COLOR(YELLOW) TEXT_SPEED("\x01")
    "You have done well to arrive" NEWLINE
    "here, and your heart is in" NEWLINE
    "balance..." FADE("\x46")
)

DECLARE_MESSAGE(0x0E04, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE COLOR(YELLOW) TEXT_SPEED("\x01")
    "You are now the master of the" NEWLINE
    "complete Triforce..." FADE("\x46")
)

DECLARE_MESSAGE(0x0E05, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE COLOR(YELLOW) TEXT_SPEED("\x01")
    "The True Force stirs within you..." FADE("\x46")
)

DECLARE_MESSAGE(0x0E06, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE COLOR(YELLOW) TEXT_SPEED("\x01")
    "Now, Link... What do you wish for?" NEWLINE TEXT_SPEED("\x00")
    THREE_CHOICE COLOR(GREEN) "Be King of Hyrule" NEWLINE
    "Rupees" NEWLINE
    "A voice"
)

DECLARE_MESSAGE(0x0E07, BOX_BLACK, POS_MIDDLE,
    UNSKIPPABLE COLOR(YELLOW) TEXT_SPEED("\x01")
    SHIFT("\x15") "Your wish has been granted." FADE("\x46")
)

DECLARE_MESSAGE(0x0E10, BOX_NONE_BOTTOM, POS_VARIABLE,
    UNSKIPPABLE COLOR(GREEN) TEXT_SPEED("\x02")
    SHIFT("\x10") "I... " TEXT_SPEED("\x00") "I can talk now?"
)

DECLARE_MESSAGE(0x0E11, BOX_NONE_BOTTOM, POS_VARIABLE,
    UNSKIPPABLE COLOR(GREEN)
    SHIFT("\x08") "It looks like a lot of people are" NEWLINE
    SHIFT("\x28") "listening to me." BOX_BREAK_DELAYED("\x28")
    SHIFT("\x28") "I must deliver a" NEWLINE
    SHIFT("\x20") "very important message."
)

DECLARE_MESSAGE(0x0E12, BOX_NONE_BOTTOM, POS_VARIABLE,
    UNSKIPPABLE QUICKTEXT_ENABLE COLOR(GREEN)
    SHIFT("\x00") "Through The Legend of Zelda" NEWLINE
    SHIFT("\x00") "series, Nintendo has created" NEWLINE
    SHIFT("\x00") "powerful experiences for" NEWLINE
    SHIFT("\x00") "generations of players." FADE("\x46")
)

DECLARE_MESSAGE(0x0E13, BOX_NONE_BOTTOM, POS_VARIABLE,
    UNSKIPPABLE QUICKTEXT_ENABLE COLOR(GREEN)
    SHIFT("\x00") "From the simple joy of" NEWLINE
    SHIFT("\x00") "exploration to the richness of" NEWLINE
    SHIFT("\x00") "self-discovery," FADE("\x30")
)

DECLARE_MESSAGE(0x0E14, BOX_NONE_BOTTOM, POS_VARIABLE,
    UNSKIPPABLE QUICKTEXT_ENABLE COLOR(GREEN)
    SHIFT("\x00") "these experiences bring" NEWLINE
    SHIFT("\x00") "tremendous value and inspiration" NEWLINE
    SHIFT("\x00") "to players' lives." FADE("\x46")
)

DECLARE_MESSAGE(0x0E15, BOX_NONE_BOTTOM, POS_VARIABLE,
    UNSKIPPABLE QUICKTEXT_ENABLE COLOR(GREEN)
    SHIFT("\x00") "It is this value which is" NEWLINE
    SHIFT("\x00") "responsible for the series" NEWLINE
    SHIFT("\x00") "being successful and beloved." FADE("\x46")
)

DECLARE_MESSAGE(0x0E16, BOX_NONE_BOTTOM, POS_VARIABLE,
    UNSKIPPABLE QUICKTEXT_ENABLE COLOR(GREEN)
    SHIFT("\x00") "We wish for this success to" NEWLINE
    SHIFT("\x00") "continue with many future Zelda" NEWLINE
    SHIFT("\x00") "games from Nintendo." FADE("\x46")
)

DECLARE_MESSAGE(0x0E17, BOX_NONE_BOTTOM, POS_VARIABLE,
    UNSKIPPABLE QUICKTEXT_ENABLE COLOR(GREEN)
    SHIFT("\x00") "We understand that protecting" NEWLINE
    SHIFT("\x00") "intellectual property is a" NEWLINE
    SHIFT("\x00") "necessary component of this." FADE("\x46")
)

DECLARE_MESSAGE(0x0E18, BOX_NONE_BOTTOM, POS_VARIABLE,
    UNSKIPPABLE QUICKTEXT_ENABLE COLOR(GREEN)
    SHIFT("\x00") "Nevertheless, we feel that there" NEWLINE
    SHIFT("\x00") "are many ways that Nintendo can" NEWLINE
    SHIFT("\x00") "cooperate constructively with" NEWLINE
    SHIFT("\x00") "fan creators." FADE("\x46")
)

DECLARE_MESSAGE(0x0E19, BOX_NONE_BOTTOM, POS_VARIABLE,
    UNSKIPPABLE QUICKTEXT_ENABLE COLOR(GREEN)
    SHIFT("\x00") "Please, Nintendo, support our" NEWLINE
    SHIFT("\x00") "work, and allow us to contribute" NEWLINE
    SHIFT("\x00") "to your success." FADE("\x46")
)

DECLARE_MESSAGE(0x0E1A, BOX_NONE_BOTTOM, POS_VARIABLE,
    UNSKIPPABLE QUICKTEXT_ENABLE COLOR(GREEN)
    SHIFT("\x00") "Together, we will create" NEWLINE
    SHIFT("\x00") "a bright future for" NEWLINE
    SHIFT("\x00") "The Legend of Zelda." FADE("\x46")
)

DECLARE_MESSAGE(0x0E1B, BOX_NONE_BOTTOM, POS_VARIABLE,
    UNSKIPPABLE COLOR(GREEN)
    SHIFT("\x00") "Now! I have some business to" NEWLINE
    SHIFT("\x00") "attend to in the far future." BOX_BREAK_DELAYED("\x28")
    SHIFT("\x00") "Thank you! I look forward to" NEWLINE
    SHIFT("\x00") "seeing you there." BOX_BREAK_DELAYED("\x28")
    SHIFT("\x00") TEXT_SPEED("\x01") "Hiyaaaaaaaaaah!" FADE("\x46")
)


// Trailer

/*
DECLARE_MESSAGE(0x109D, BOX_NONE_BOTTOM, POS_VARIABLE,
    SHIFT("\x1B") "If you were really good" NEWLINE
    SHIFT("\x24") "at pressing buttons," NEWLINE
    SHIFT("\x23") "what would you do?" BOX_BREAK_DELAYED("\x28")
    SHIFT("\x10") "Would you play a game really" NEWLINE
    SHIFT("\x0B") "skillfully, but within the bounds" NEWLINE
    SHIFT("\x14") "intended by the developers?" BOX_BREAK_DELAYED("\x28")
    SHIFT("\x12") "Would you perform difficult," NEWLINE
    SHIFT("\x08") "elaborate glitches to skip large" NEWLINE
    SHIFT("\x20") "portions of the game?" BOX_BREAK_DELAYED("\x28")
    SHIFT("\x13") "Or would you get a robot," BOX_BREAK_DELAYED("\x28")
    SHIFT("\x1B") "build on two decades of" NEWLINE
    SHIFT("\x18") "reverse engineering work," BOX_BREAK_DELAYED("\x28")
    SHIFT("\x1B") "and glitch your way into" NEWLINE
    SHIFT("\x17") "changing the game's code?" BOX_BREAK_DELAYED("\x28")
    
    SHIFT("\x21") "If you had the ability" NEWLINE
    SHIFT("\x0A") "to rewrite the laws of reality," NEWLINE
    SHIFT("\x24") "what would you do?" BOX_BREAK_DELAYED("\x28")
                  "Would you just achieve your goals" NEWLINE
    SHIFT("\x1F") "as quickly as possible?" BOX_BREAK_DELAYED("\x28")
    SHIFT("\x15") "Would you erase everything" NEWLINE
    SHIFT("\x09") "and make something brand new?" BOX_BREAK_DELAYED("\x28")
    SHIFT("\x09") "Or would you make the dreams" BOX_BREAK_DELAYED("\x28")
    SHIFT("\x20") "of millions of players" BOX_BREAK_DELAYED("\x28")
    SHIFT("\x27") "finally come true?" BOX_BREAK_DELAYED("\x28")
    
    SHIFT("\x0D") "If you had the power to make" NEWLINE
    SHIFT("\x07") "Hyrule however you dreamed it..." BOX_BREAK_DELAYED("\x28")
                  "the attention of thousands of viewers..." BOX_BREAK_DELAYED("\x28")
    SHIFT("\x08") "and one wish to the Goddesses..." BOX_BREAK_DELAYED("\x28")
    SHIFT("\x02") "would you create something great?" FADE("\x50")
)

DECLARE_MESSAGE(0x109D, BOX_CREDITS, POS_VARIABLE,
    QUICKTEXT_ENABLE NEWLINE NEWLINE NEWLINE NEWLINE NEWLINE
    SHIFT("\x42") "Triforce%" NEWLINE NEWLINE
    SHIFT("\x28") "OoT ACE Showcase" 
    QUICKTEXT_DISABLE BOX_BREAK_DELAYED("\x28")
    QUICKTEXT_ENABLE NEWLINE NEWLINE NEWLINE
    SHIFT("\x18")   "Sauraen"    SHIFT("\x36") "Savestate"     NEWLINE
    SHIFT("\x20")    "/zel/"     SHIFT("\x40") "CDi-Fails"     NEWLINE
    SHIFT("\x14")  "rankaisija"  SHIFT("\x3A") "z64me"         NEWLINE
    SHIFT("\x0D") "TerusTheBird" SHIFT("\x25") "Kim-SukLey"    NEWLINE
    SHIFT("\x15")   "MrCheeze"   SHIFT("\x26") "RebeccaETripp" NEWLINE
    SHIFT("\x1E")    "Yukloj"    SHIFT("\x48") "Zero"          NEWLINE
    SHIFT("\x0B")  "AeroArtwork" SHIFT("\x26") "musket012"
    QUICKTEXT_DISABLE BOX_BREAK_DELAYED("\x28")
    QUICKTEXT_ENABLE NEWLINE NEWLINE NEWLINE NEWLINE NEWLINE NEWLINE
    SHIFT("\x3E") "AGDQ 2022"
    QUICKTEXT_DISABLE BOX_BREAK_DELAYED("\x28")
    "dummy"
)
*/

//This one needs to come at the end
DECLARE_MESSAGE(0xFFFF, BOX_BLUE, POS_MIDDLE,
    "Dummy"
)
