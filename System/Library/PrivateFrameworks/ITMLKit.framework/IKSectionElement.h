/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKDataSourceElement.h>

@class NSArray, IKHeaderElement, IKViewElement;

@interface IKSectionElement : IKDataSourceElement {

	NSArray* _items;

}

@property (nonatomic,retain,readonly) IKHeaderElement * header; 
@property (nonatomic,retain,readonly) NSArray * items; 
@property (nonatomic,retain,readonly) IKViewElement * footer; 
-(NSArray *)items;
-(IKHeaderElement *)header;
-(IKViewElement *)footer;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)appDocumentDidMarkStylesDirty;
-(id)unboundItemElements;
@end
