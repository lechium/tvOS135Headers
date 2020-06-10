/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SSDoubleLinkedListNode : NSObject {

	SSDoubleLinkedListNode* _previous;
	id _object;
	SSDoubleLinkedListNode* _next;
	NSString* _listIdentifier;

}

@property (nonatomic,retain) NSString * listIdentifier;                      //@synthesize listIdentifier=_listIdentifier - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * previous;              //@synthesize previous=_previous - In the implementation block
@property (nonatomic,retain) id object;                                      //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * next;                  //@synthesize next=_next - In the implementation block
-(id)init;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(SSDoubleLinkedListNode *)next;
-(SSDoubleLinkedListNode *)previous;
-(void)setNext:(SSDoubleLinkedListNode *)arg1 ;
-(NSString *)listIdentifier;
-(void)setPrevious:(SSDoubleLinkedListNode *)arg1 ;
-(void)setListIdentifier:(NSString *)arg1 ;
@end

