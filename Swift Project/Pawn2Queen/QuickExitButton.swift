//
//  ContentMenu.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/31/22.
//  This will be the real menu to appear on the bottom of
//  every page. It should be at least a FAB for quick exit and a back button to the main page.

import SwiftUI

struct QuickExitButton: View {
    var body: some View {
        NavigationStack{
            ZStack {
                VStack {
                    Spacer()
                    HStack {
                        Spacer()
                        NavigationLink(destination: QuickExitPage()){
                                Image(systemName: "figure.run.circle.fill")
                                    .resizable(resizingMode: .stretch)
                                    .font(.largeTitle)
                                    .frame(width: 65, height: 65)
                                    .background(Color .red)
                                    .clipShape(Circle())
                                    .foregroundColor(Color .black)
                                    .padding()
                                    .cornerRadius(10)
                                    .shadow(radius: 5)
                        }
                    }
                }
            }
        }
    }
}


struct QuickExitButton_Previews: PreviewProvider {
    static var previews: some View {
        QuickExitButton()
    }
}
