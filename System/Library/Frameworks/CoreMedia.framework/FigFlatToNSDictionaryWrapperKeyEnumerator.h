/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMedia/CoreMedia-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface FigFlatToNSDictionaryWrapperKeyEnumerator : NSEnumerator {

	/*function pointer*/void** _keys;
	int _keysCount;
	int _counter;

}
-(void)dealloc;
-(id)nextObject;
-(id)allObjects;
-(id)initWithFlatDictionary:(OpaqueFigFlatDictionaryRef)arg1 ;
@end

