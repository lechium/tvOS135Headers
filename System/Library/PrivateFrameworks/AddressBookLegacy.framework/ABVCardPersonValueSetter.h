/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
#import <AddressBookLegacy/ABVCardValueSetter.h>

@interface ABVCardPersonValueSetter : ABVCardValueSetter {

	void* _person;
	CFArrayRef _properties;

}
+(CFArrayRef)supportedProperties;
-(void)dealloc;
-(void*)valueForProperty:(unsigned)arg1 ;
-(BOOL)setValue:(void*)arg1 forProperty:(unsigned)arg2 ;
-(id)imageData;
-(id)fullName;
-(id)initWithPerson:(void*)arg1 ;
-(CFArrayRef)foundProperties;
-(BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5 ;
-(void)setValueInTemporaryCache:(id)arg1 forProperty:(unsigned)arg2 ;
@end

