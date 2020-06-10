/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABSAddressBook;

@interface ABSAssistantManager : NSObject {

	ABSAddressBook* _addressBook;

}

@property (nonatomic,readonly) ABSAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
-(id)init;
-(id)initWithAddressBook:(id)arg1 ;
-(ABSAddressBook *)addressBook;
-(id)newSAPersonFromABPerson:(void*)arg1 ;
@end

